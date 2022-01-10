//
// Created by pbbbbb on 2022/1/10.
//

/*
 *
 * 创建一个返回最小值的栈
 *
 */

#include<stack>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    int mini = INT_MAX;
    MinStack() {

    }

    void push(int x) {
        st.push(mini);   //在判断之前push是为了保留这个数进来之前的最小值，这样出站的时候mini就能拿到正确的当前最小值
        if (x < mini) mini = x;
        st.push(x);
    }

    void pop() {
        st.pop();
        mini = st.top();
        st.pop();
    }

    int top() {
        return st.top();
    }

    int min() {
        return mini;
    }
};