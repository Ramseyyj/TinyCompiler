//
//  exprAST.h
//  TinyCompiler
//
//  Created by lms on 12/3/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __TinyCompiler__exprAST__
#define __TinyCompiler__exprAST__

#include "node.h"

namespace tinyCompiler {
    class ExprAST : public Node{
    protected:
        virtual void dump(int depth, std::ostream &out = std::cout);
    };
}

#endif /* defined(__TinyCompiler__exprAST__) */
