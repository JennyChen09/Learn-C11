//
//  initializerlist.cpp
//  Learn C++ chapter6
//
//  Created by 李生广 on 17/3/16.
//  Copyright © 2017年 李生广. All rights reserved.
//

#include "initializerlist.hpp"
void error_msg(initializer_list<string> il){
   // for(auto beg:il)
     //   cout<<beg<<" ";
    for(auto beg = il.begin(); beg != il.end();++beg)
        cout<<*beg<<" ";
    
}
int Sum(initializer_list<int> il){
    int sum = 0;
    for(auto c:il){
        sum += c;
    }
    return sum;
}
