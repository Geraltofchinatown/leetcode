//
// Created by pbbbbb on 2022/1/18.
//

/**
 *
 *
 * 反转字符串 II
 *
 *
 */
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += (2 * k)) {
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k);
            }else reverse(s.begin() + i, s.end());
        }
        return s;
    }
};