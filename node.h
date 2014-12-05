//
//  node.h
//  TinyCompiler
//
//  Created by lms on 12/3/14.
//  Copyright (c) 2014 lms. All rights reserved.
//

#ifndef __TinyCompiler__node__
#define __TinyCompiler__node__

#include <iostream>

namespace tinyCompiler {
    class Node{
    public:
        virtual void dump(int depth, std::ostream &out = std::cout);
        virtual ~Node();
    protected:
        static void printSpace(int depth, std::ostream &out = std::cout) {
            for (int i = 0; i < depth ; ++i){
                out << " ";
            }
        }
    };
}

#endif /* defined(__TinyCompiler__node__) */
