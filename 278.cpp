//
// Created by pbbbbb on 2022/1/17.
//

/**
 *
 * 二分查找
 *
 *
 */
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while (left <= right){
            mid = left + ((right - left) >> 1);
            if (nums[mid] < target){
                left = mid + 1;
            }else if (nums[mid] > target){
                right = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};