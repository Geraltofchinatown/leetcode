//
// Created by pbbbbb on 2022/3/30.
//两数之和
#include<vector>
#include<map>
using namespace  std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy = nums;
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            if (nums[left] + nums[right] < target){
                ++left;
            }else if (nums[left] + nums[right] > target){
                --right;
            }else break;
        }
        for(int i=0; i<nums.size(); ++i){
            if(copy[i] == nums[left]){
                left = i;
                break;
            }
        }
        for(int i=0; i<nums.size(); ++i){
            if(copy[i] == nums[right] && i != left){
                right = i;
                break;
            }
        }
        vector<int> res = {left, right};
        return res;
    }
};



//哈希表做法

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a;
        vector<int> res(2, -1);
        for (int i = 0; i < nums.size(); ++i) {
            if(a.count(target - nums[i]) > 0){
                res[0] = i;
                res[1] = a[target - nums[i]];
                break;
            }
            a[nums[i]] = i;
        }
        return res;
    }
};
