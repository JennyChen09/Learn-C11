//
//  ListNode.hpp
//  Learn C++ chapter6
//
//  Created by 李生广 on 17/3/15.
//  Copyright © 2017年 李生广. All rights reserved.
//

#ifndef ListNode_hpp
#define ListNode_hpp

#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;
struct ListNode{
    int val;
    struct ListNode *next;
    ListNode(int x):
    val(x),next(NULL){
        
    }
};

void AddToTail(ListNode *phead, int value);
vector<int> printListFromTailToHead(ListNode* head);//从尾到头打印链表
void RemoveNode(ListNode *phead, int value);
#endif /* ListNode_hpp */
