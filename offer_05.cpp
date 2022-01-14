//
// Created by pbbbbb on 2022/1/13.
//

/**
 *
 * 替换字符串中间的空格
 *
 *
 *
 */
#include<string>
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        string::size_type position = s.find(" ");
        while (position != s.npos){
            s = s.replace(s.find(" "), 1, "%20");
            position = s.find(" ");
        }
        return s;
    }
};