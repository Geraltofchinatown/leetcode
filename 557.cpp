//
// Created by pbbbbb on 2022/1/20.
//

/**
 *
 * 反转字符串中的单词
 *
 *
 */
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int count = 0,point = 0;
        for (int i = 0; i < s.size() + 1; ++i){
            if (s[i] == ' ' || s[i] == '\0'){
                reverse(s.begin() + count, s.begin()  + i );
                count = i + 1;
            }
        }
        return s;
    }
};