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
 * 反向打印链表,不用返回完整链表结构
 */
struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        deque<int> temp;
        while (head != NULL){
            temp.push_front(head->val);
            head = head->next;
        }
        vector<int> res(temp.begin(), temp.end());
        return res;
    }
};