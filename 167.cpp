//
// Created by pbbbbb on 2022/1/20.
//

/**
 *
 * 两数之和II---输入有序数组
 *
 *
 */
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j){
            if (numbers[i] + numbers[j] < target){
                ++i;
            }else if (numbers[i] + numbers[j] > target){
                --j;
            }else break;
        }
        vector<int> res = {i + 1, j + 1};
        return res;
    }
};