//
//  Dictionary.cpp
//  TinyCompiler
//
//  Created by lms on 11/28/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include "Dictionary.h"

namespace tinyCompiler
{
    Dictionary::Dictionary(){
        addToken("if",      std::make_pair(TokenType::KEYWORD, TokenValue::IF));
        addToken("then",    std::make_pair(TokenType::KEYWORD, TokenValue::THEN));
        addToken("else",    std::make_pair(TokenType::KEYWORD, TokenValue::ELSE));
        addToken("end",     std::make_pair(TokenType::KEYWORD, TokenValue::END));
        addToken("repeat",  std::make_pair(TokenType::KEYWORD, TokenValue::REPEAT));
        addToken("until",   std::make_pair(TokenType::KEYWORD, TokenValue::UNTIL));
        addToken("read",    std::make_pair(TokenType::KEYWORD, TokenValue::READ));
        addToken("write",   std::make_pair(TokenType::KEYWORD,TokenValue::WRITE));
        
        addToken("(",   std::make_pair(TokenType::DELIMITER, TokenValue::LEFT_PAREN));
        addToken(")",   std::make_pair(TokenType::DELIMITER, TokenValue::RIGTH_PAREN));
        addToken(";",   std::make_pair(TokenType::DELIMITER, TokenValue::SEMICOLON));
        
        addToken("+",   std::make_pair(TokenType::OPERATOR, TokenValue::PLUS));
        addToken("-",   std::make_pair(TokenType::OPERATOR, TokenValue::MINUS));
        addToken("*",   std::make_pair(TokenType::OPERATOR, TokenValue::MULTIPLY));
        addToken("/",   std::make_pair(TokenType::OPERATOR, TokenValue::DIVIDE));
        addToken(":=",  std::make_pair(TokenType::OPERATOR, TokenValue::ASSIGN));
        addToken("=",   std::make_pair(TokenType::OPERATOR, TokenValue::EQUAL));
        addToken(":=",  std::make_pair(TokenType::OPERATOR, TokenValue::LESS_THEN));
    }
    
    void Dictionary::addToken(std::string name, std::pair<TokenType, TokenValue> tokenMeta){
        dictionary_.insert(std::make_pair(name,tokenMeta));
    }
    
}
