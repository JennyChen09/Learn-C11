//
//  Solution.cpp
//  Learn C++ chapter6
//
//  Created by 李生广 on 17/3/16.
//  Copyright © 2017年 李生广. All rights reserved.
//

#include "Solution.hpp"

void Solution::replaceSpace(char* str,int length){
    if(str==nullptr || length<=0)
        return;
    int blankSize = 0;
    int originLength = 0;
    for(int i=0; str[i]!='\0';i++){
        originLength++;
        if(str[i]==' ')
            blankSize++;
    }
    int newLength = originLength + blankSize*2;
    if(newLength > length)
        return;
    int j = newLength;
    for(int i = originLength; i>=0; i--){
        if(str[i]!=' ')
            str[j--]=str[i];
        else{
            str[j--]='0';
            str[j--]='2';
            str[j--]='%';
        }
    }
}

bool Solution::Find(int target, vector<vector<int>> array){
    bool found = false;
    if(array.empty())
        return false;
    int rows = static_cast<int> (array.size());
    int cols = static_cast<int>(array[0].size());
    int i = 0, j = cols-1;
    while(i>=0&&i<rows && j>=0 && j<cols){
        if(array[i][j]==target)
            found = true;
        if(array[i][j]>target)
            j--;
        if(array[i][j]<target)
            i++;
    }
    
    return found;
}