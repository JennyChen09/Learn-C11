//
//  main.cpp
//  Learn C++ chapter6
//
//  Created by 李生广 on 17/3/14.
//  Copyright © 2017年 李生广. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <vector>
#include "ListNode.hpp"
#include "Solution.hpp"
#include "initializerlist.hpp"
using namespace std;
void print(vector<int>::iterator beg, vector<int>::iterator end){
    if(beg!=end){
        cout<<*beg<<" ";
        print(next(beg),end);
    }
}


int main(){
    vector<int> vec{1,2,3,4,5};
    print(vec.begin(),vec.end());
    cout<<Sum({1,2,3,4,5})<<endl;
    
    ListNode *p = new ListNode(6);
    AddToTail(p, 5);
    AddToTail(p, 4);
    AddToTail(p, 10);
    RemoveNode(p, 4);
    
    
    
}
