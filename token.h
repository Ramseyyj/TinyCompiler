//
//  token.h
//  TinyCompiler
//
//  Created by lms on 11/28/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __TinyCompiler__token__
#define __TinyCompiler__token__

#include <iostream>
#include <utility>

namespace tinyCompiler
{
	enum class TokenType{
		INTERGER,		// only have interger T_T
		KEYWORD,		// such as if
		OPERATOR,		// such as + - * /
		DELIMITER,		// such as ;
		END_OF_FILE		// end of file
	};

	enum class TokenValue{
		// keyword
		IF,
		THEN,
		ELSE,
		END,
		REPEAT,
		UNTIL,
		READ,
		WRITE,

		// symbols
		LEFT_PAREN,		// (
		RIGTH_PAREN,	// )
		PLUS,			// +
		MINUS,			// -
		MULTIPLY,		// *
		DIVIDE,			// /
		ASSIGN,			// :=
		SEMICOLON,		// ;

		// comparation symbols
		EQUAL,			// =
        LESS_THEN,      // <

		UNRESERVED
	};

    //TokenLocation
	class TokenLocation{
	public:
		TokenLocation();
        TokenLocation(const std::string &fileName, long line, long column);

	private:
		long        line_;
		long        column_;
        std::string fileName_;
	};

    //Token
	class Token{
	public:
		Token();
		Token(TokenType type, TokenValue value,const TokenLocation &location,
              std::string name);
        Token(TokenType type, TokenValue value, const TokenLocation &location,
              long intValue, std::string name);

		TokenType getTokenType() const;
		TokenValue getTokenValue() const;

		const TokenLocation& getTokenLocation() const;
		std::string getTokenName() const;

	private:
		TokenType       type_;
        TokenValue      value_;
        TokenLocation   location_;
        std::string     name_;
        
        long            intValue_;
        std::string     strValue_;
	};
    
    inline TokenType Token::getTokenType() const{
        return type_;
    }
    
    inline TokenValue Token::getTokenValue() const{
        return value_;
    }
    
    inline const TokenLocation& Token::getTokenLocation() const{
        return location_;
    }
}

#endif /* defined(__TinyCompiler__token__) */
