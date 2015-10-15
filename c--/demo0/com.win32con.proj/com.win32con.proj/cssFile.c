//
//  cssFile.cpp
//  CSubSub
//
//  Created by plter on 14-5-20.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include "cssFile.h"


static int cssFileOpen(cssFile * _this,char * mode){
    
	if (_this->_currentCFile!=NULL) {
		fclose(_this->_currentCFile);
	}
    
	_this->_currentCFile = fopen(_this->_fileName->_cstr,mode);
    
	if (_this->_currentCFile!=NULL) {
        
		fseek(_this->_currentCFile,0,SEEK_END);
		_this->_size = ftell(_this->_currentCFile);
		rewind(_this->_currentCFile);
		return 1;
	}else{
		return 0;
	}
}

static void cssFileClose(cssFile * _this){
    
	if (_this->_currentCFile!=NULL) {
		fclose(_this->_currentCFile);
		_this->_currentCFile = NULL;
	}
}

static long cssFileGetSize(cssFile * _this){
	return _this->_size;
}

static cssString * cssFileGetStringContent(cssFile * _this){
    
	if (_this->_currentCFile!=NULL) {
        
		if (_this->_stringContent!=NULL) {
			_this->_stringContent->release(_this->_stringContent);
		}
        
		char buff[_this->_size+1];
		fread(buff,1,_this->_size,_this->_currentCFile);
		buff[_this->_size] = '\0';
		_this->_stringContent = cssStringInitWithCString(cssAlloc(cssString),buff);
		return _this->_stringContent;
	}else{
        logOut("Current CFile is NULL,please call open method first");
    }
    
	return NULL;
}

static void cssFileOnDelloc(cssFile *_this){
    
	logOut("Destroy cssFile");
    
	_this->_fileName->release(_this->_fileName);
	if (_this->_currentCFile!=NULL) {
		fclose(_this->_currentCFile);
	}
	if (_this->_stringContent!=NULL) {
		_this->_stringContent->release(_this->_stringContent);
	}
    
	_this->onCssObjectDelloc(_this);
}

static cssString* cssFileGetFileName(cssFile *_this){
	return _this->_fileName;
}

cssFile * cssFileInit(cssFile * _this,cssString * fileName){
    
	cssObjectInit(cssAs(cssObject*,_this));
    
	_this->_size = 0;
    
	_this->onCssObjectDelloc = _this->onDelloc;
	_this->onDelloc = &cssFileOnDelloc;
    
	_this->_fileName = fileName;
	_this->_fileName->retain(_this->_fileName);
    
	_this->_currentCFile = NULL;
	_this->_stringContent = NULL;
    
	_this->open = &cssFileOpen;
	_this->close = &cssFileClose;
	_this->getSize = &cssFileGetSize;
	_this->getFileName = &cssFileGetFileName;
	_this->getStringContent = &cssFileGetStringContent;
    
	logOut("init cssFile");
	return _this;
}

cssFile * cssFileCreate(cssString * fileName){
	return cssFileInit(cssAlloc(cssFile),fileName);
}