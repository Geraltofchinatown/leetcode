//
// Created by pbbbbb on 2022/1/11.
//

#include<vector>
#include<deque>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * 链表反转，输出的还是链表
 */
struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = NULL;
        ListNode *next_l = NULL;
        while(head != NULL){
            next_l = head->next;
            head->next = pre;
            pre = head;
            head = next_l;
        }
        return pre;
    }
};