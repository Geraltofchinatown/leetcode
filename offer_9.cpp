//
// Created by pbbbbb on 2022/1/10.
//
#include <iostream>
#include <stack>
#include <iterator>
using namespace std;
class CQueue {
public:
    stack<int> sFoward;
    stack<int> sBackward;
    CQueue() {

    }
    void appendTail(int value) {
        sFoward.push(value);
    }

    int deleteHead() {
        if (sFoward.empty()) return -1;
        while (sFoward.size()) {
            int a = sFoward.top();
            sFoward.pop();
            sBackward.push(a);
        }
        int queueOut = sBackward.top();
        sBackward.pop();
        while (sBackward.size()) {
            int b = sBackward.top();
            sBackward.pop();
            sFoward.push(b);
        }
        return queueOut;
    }
};
int main(){
    stack<int> a;

    return 0;
}
/**
 * 用两个栈完成队列的头删以及尾插
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */