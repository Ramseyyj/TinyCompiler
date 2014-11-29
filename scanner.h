//
//  scanner.h
//  TinyCompiler
//
//  Created by lms on 11/29/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __TinyCompiler__scanner__
#define __TinyCompiler__scanner__

#include <fstream>
#include "dictionary.h"

namespace tinyCompiler {
    class Scanner{
    public:
        explicit Scanner(const std::string &fileName);
        Token   getToken() const;
        Token   getNextToken();
    private:
        void    getNextChar();
        char    peekChar();
        void    addToBuffer(char c);
        void    reduceBuffer();
        
        void    makeToken(TokenType tType, TokenValue tValue, const TokenLocation &tLocation,
                          std::string name);
        void    makeToken(TokenType tType, TokenValue tValue, const TokenLocation &tLocation,
                          long intValue, std::string name);
        
        //handle state
        void    handleEOFState();
        void    handleIdentifierState();
        void    handleNumberState();
        void    handleStringState();
        void    handleOperationState();
        
        //handle comment
        void    handleLineComment();
        void    handleBlockComment();
        
        void    handleDigit();
        TokenLocation getTokenLocation() const;
        
        
        
    private:
        enum class State{
            NONE,
            END_OF_FILE,
            IDENTIFIER,
            NUMBER,
            STRING,
            OPERATION
        };
        
        std::string     fileName_;
        std::fstream    input_;
        char            currentChar_;
        std::string     buffer_;
        
        long            line_;
        long            column_;
        TokenLocation   location_;
        
        Token           token_;
        Dictionary      dictionary_;
        State           state_;
    };
    
    inline Token Scanner::getToken() const{
        return token_;
    }
    
    inline TokenLocation Scanner::getTokenLocation() const{
        return TokenLocation(fileName_, line_, column_);
    }
}

#endif /* defined(__TinyCompiler__scanner__) */
