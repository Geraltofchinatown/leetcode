//
// Created by pbbbbb on 2022/1/14.
//
#include<string>
#include<iostream>
/**
 *
 * 循环左移字符串
 *
 *
 */
using namespace std;
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string res;
        res.append(s.begin() + n, s.end());
        res.append(s.begin(), s.begin() + n);
    }
};

int main(){
    string world = "abcdef";
    string a;
    a.append(world.begin(), world.begin() + 2);
    cout << a << endl;
}