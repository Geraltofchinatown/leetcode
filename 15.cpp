//
// Created by pbbbbb on 2022/1/10.
//

//
// Created by pbbbbb on 2022/1/8.
//

#include <iostream>
#include <vector>
/*
 *
 * 三数之和
 *
 */


using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        int size = nums.size();
        std::sort(nums.begin(), nums.end());
        if (size < 3) return {};
        if (size > 3 && nums[0] > 0) return {};  //顺序排序第一个大于零后面都不可能有复数
        for (int i = 0; i < size; ++i) {    //双指针遍历
            int left = i + 1;
            int right = size - 1;
            if(i > 0 && nums[i] == nums[i - 1]) continue;   //在开始的时候先去除重复
            while (left < right){
                if (nums[left] + nums[right] < -nums[i]){
                    ++left;
                    while(left < right && nums[left] == nums[left - 1]) ++left;
                }else if (nums[left] + nums[right] > -nums[i]){
                    --right;
                    while(left < right && nums[right] == nums[right + 1]) --right;
                }else {
                    output.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    ++left;
                    --right;

                    while(left < right && nums[left] == nums[left - 1]) ++left;     //对后两个数进行去重
                    while(left < right && nums[right] == nums[right + 1]) --right;
                }

            }
        }
        return output;
    }
};

int main(){
    Solution a;
    vector<int> a1 = {-1,0,1,2,-1,-4};
    a.threeSum(a1);

    return 0;
}