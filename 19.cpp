//
// Created by pbbbbb on 2022/1/22.
//

/**
 *
 *删除链表的倒数第n个节点
 *
 *
 */
#include<vector>
  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = head;
        ListNode* next1 = head;
        //if(!head | !head->next) return NULL;
        //if(head->next == NULL) return NULL;  //对于只有一个元素
        for (int i = 0; i < n; ++i){
            next1 = next1->next;
        }
        if (next1 == NULL){          //对于删除第一个节点
            return res->next;
        }
        while (next1->next != NULL){
            head = head->next;
            next1 = next1->next;
        }
        head->next = head->next->next;
        return res;
    }
};
