//
// Created by pbbbbb on 2022/1/18.
//
#include<vector>
#include<iterator>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        vector<int>::iterator front1 = nums.begin();
        vector<int>::iterator front2 = nums.end() - 1;
        while(front1 <= front2){
            if (front1 != front2){
                res.push_back(pow(*front1, 2));
                res.push_back(pow(*front2, 2));
            }else res.push_back(pow(*front1, 2));
            front1++;
            front2--;
        }
        sort(res.begin(), res.end());
        return res;
    }
};