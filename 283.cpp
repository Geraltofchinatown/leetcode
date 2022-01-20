//
// Created by pbbbbb on 2022/1/20.
//

/**
 *
 * 数组去零
 *
 *
 */
#include<vector>
using namespace std;

/**
 *
 * 数组去零
 *
 *
 */
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] != 0){
                nums[j++] = nums[i];
            }
        }
        while (j < nums.size()){
            nums[j++] = 0;
        }
    }
};
