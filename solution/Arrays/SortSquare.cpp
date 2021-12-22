// leetcode 977 有序数组的平方
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int k = nums.size() - 1;
        for (int i = 0, j = nums.size()-1; i <= j;) {
            if (nums[i] * nums[i] < nums[j] * nums[j]) {
                result[k--] = nums[j] * nums[j];
                j--;
            } else {
                result[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {-5, -3, 0, 2, 4};
    Solution solution0;
    vector<int> result;
    result = solution0.sortedSquares(nums);
    for (int x : result) {
        cout << x << endl;
    }
    return 0;
}