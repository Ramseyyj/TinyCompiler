//
//  stmtAST.h
//  TinyCompiler
//
//  Created by lms on 12/3/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __TinyCompiler__stmtAST__
#define __TinyCompiler__stmtAST__

#include "node.h"

namespace tinyCompiler {
    class StmtAST : public Node{
    protected:
        virtual void dump(int depth, std::ostream &out = std::cout);
    };
}

#endif /* defined(__TinyCompiler__stmtAST__) */
