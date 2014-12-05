//
//  parser.h
//  TinyCompiler
//
//  Created by lms on 12/2/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __TinyCompiler__parser__
#define __TinyCompiler__parser__

#include <iostream>
#include "scanner.h"

namespace tinyCompiler{
    class Parser{
    public:
        Parser(const std::string &srcFileName);

        void    grammarParse();
    private:
        
    private:
        Scanner     scanner_;
    };
}

#endif /* defined(__TinyCompiler__parser__) */
