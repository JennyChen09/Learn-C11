//
//  initializerlist.hpp
//  Learn C++ chapter6
//
//  Created by 李生广 on 17/3/16.
//  Copyright © 2017年 李生广. All rights reserved.
//

#ifndef initializerlist_hpp
#define initializerlist_hpp

#include <stdio.h>
#include <iostream>
#include <initializer_list>
#include <string>
#include <exception>

using namespace std;

void error_msg(initializer_list<string> il);
//void error_msg(initializer_list<string> il, ...);//省略符形参
int Sum(initializer_list<int> il);

#endif /* initializerlist_hpp */
