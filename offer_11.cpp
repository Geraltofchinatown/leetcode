//
// Created by pbbbbb on 2022/1/21.
//
/**
 *
 * 旋转数组的最小数字
 *
 *
 */
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int left = 0, right = numbers.size() - 1;
        while (left <= right){
            int mid = left + ((right - left) >> 1);
            if (numbers[mid] > numbers[right]){
                left = mid + 1;
            }else if(numbers[mid] < numbers[right]){
                right = mid;            //一定不能减一不然会落入前面的递增
            }else right--;
        }
        return numbers[left];
    }
};

int main(){
    vector<int> a = {1, 1};
    Solution b;
    int i = b.minArray(a);
    return 0;
}