//
// Created by pbbbbb on 2022/1/18.
//
/**
 *
 *
 * 轮转数组
 *
 *
 */
#include<vector>
#include<iterator>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for (int i = nums.size() - 1, j = i + k; i <= 0; --i, --j) {
            nums[j] = nums[i];
        }
        for (int i = 0, j = nums.size(); i < nums.size(); ++i, ++j){
            nums[i] = nums[j];
        }
    }
};