//
//  scanner.cpp
//  TinyCompiler
//
//  Created by lms on 11/29/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include "scanner.h"

namespace tinyCompiler {
    Scanner::Scanner(const std::string &fileName):fileName_(fileName),line_(1),column_(0),currentChar_(0),state_(State::NONE){
        input_.open(fileName_);
        
        if(input_.fail()){
            std::cout<<"Open File Error!"<<std::endl;
        }
    }
    
    void Scanner::getNextChar(){
        currentChar_=input_.get();
        
        if(currentChar_=='\n'){
            line_++;
            column_=0;
        }
        else{
            column_++;
        }
    }
    
    char Scanner::peekChar(){
        return  input_.peek();
    }
    
    void Scanner::addToBuffer(char c){
        buffer_.push_back(c);
    }
    
    void Scanner::reduceBuffer(){
        buffer_.pop_back();
    }
    
    void Scanner::makeToken(TokenType tType, TokenValue tValue, const TokenLocation &tLocation,
                   std::string name){
        token_=Token(tType, tValue, tLocation, name);
        buffer_.clear();
        state_=State::NONE;
    }
    
    //something need to do here
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
