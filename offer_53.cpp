//
// Created by pbbbbb on 2022/1/14.
//
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int count = 0;
        int L = 0;
        int mid = -1;
        int R = nums.size() - 1;
        while(L <= R){
            mid = L + ((R - L) >> 1);
            if (nums[mid] > target){
                R = mid - 1;
            }else if (nums[mid] < target){
                L = mid + 1;
            }else {                             //找到一个数字之后就直接向内收紧
                while (target != nums[L]){
                    L ++;
                }
                while (target != nums[R]){
                    R --;
                }
                return R - L + 1;
            }
        }
        return 0;
    }
};