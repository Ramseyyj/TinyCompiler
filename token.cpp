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
    
}