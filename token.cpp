//
//  token.cpp
//  TinyCompiler
//
//  Created by lms on 11/28/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include "token.h"

namespace tinyCompiler
{
    TokenLocation::TokenLocation(int line, int column)
        :line_(line),column_(column){}
    
    Token::Token(TokenType type, TokenValue value, const TokenLocation &location,
                 std::string name)
        :type_(type),value_(value),location_(location),name_(name){}
}