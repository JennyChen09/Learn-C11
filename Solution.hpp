//
//  Solution.hpp
//  Learn C++ chapter6
//
//  Created by 李生广 on 17/3/16.
//  Copyright © 2017年 李生广. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Solution{
public:
    void replaceSpace(char* str,int length);
    static bool Find(int target, vector<vector<int>> array);
};

#endif /* Solution_hpp */
