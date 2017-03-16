//
//  ListNode.cpp
//  Learn C++ chapter6
//
//  Created by 李生广 on 17/3/15.
//  Copyright © 2017年 李生广. All rights reserved.
//

#include "ListNode.hpp"

void AddToTail(ListNode *phead, int value){
    ListNode *pnew = new ListNode(value);
    if(phead == nullptr){
        phead = pnew;
    }else{
        ListNode *pNode = phead;
        while(pNode->next!=nullptr)
            pNode = pNode->next;
        
        pNode->next = pnew;
    }
}
void RemoveNode(ListNode *phead, int value){
    if(phead==nullptr)
        return;
    ListNode *pNode = phead;
    ListNode *pToDelete = nullptr;
    if(phead->val==value){
        pToDelete = phead;
        phead = phead->next;
    }else{
        while(pNode->next->val!=value && pNode->next!=nullptr){
            pNode = pNode->next;
        }
        if(pNode->next!=nullptr && pNode->next->val == value){
            pToDelete = pNode->next;
            pNode->next = pNode->next->next;
        }
        
    }
    if(pToDelete!=nullptr){
        delete pToDelete;
        pToDelete=nullptr;
    }
    
    
}
vector<int> printListFromTailToHead(ListNode* head){
    stack<int> s;
    vector<int> v;
    ListNode *pNode = head;
    while(pNode->next != NULL){
        s.push(pNode->val);
        pNode = pNode->next;
    }
    while(s.size()>0){
        v.push_back(s.top());
        s.pop();
    }
    return v;
}