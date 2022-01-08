//
// Created by pbbbbb on 2022/1/8.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> out;
        for (int i = 2; i < 1 << n; i ++){
            out.push_back(i ^ (i >> 1));
        }
    }
};



int main(){

    return 0;
}