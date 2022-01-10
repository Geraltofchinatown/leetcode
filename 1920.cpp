//
// Created by pbbbbb on 2022/1/10.
//

#include <vector>
#include <iterator>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> res;
        int range = nums.size();
        for (int i = 0; i < range; ++i) {
            vector<int>::iterator count = nums.begin();
            res.push_back(nums[*(count + i)]);
        }
        return res;
    }
};