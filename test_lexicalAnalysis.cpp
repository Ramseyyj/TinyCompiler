//
//  test_lexicalAnalysis.cpp
//  TinyCompiler
//
//  Created by lms on 12/1/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "token.h"
#include "dictionary.h"
#include "scanner.h"

using namespace tinyCompiler;

int main(){
    Scanner myScanner("test.txt");
    
    myScanner.getNextToken();
    
    while (myScanner.getToken().getTokenType() != TokenType::END_OF_FILE) {
        myScanner.getToken().dump();
        myScanner.getNextToken();
    }
    return 0;
}