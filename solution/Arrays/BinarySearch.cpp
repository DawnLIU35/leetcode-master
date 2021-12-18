#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] < target) {
                left = middle + 1;
            } else if (nums[middle] > target) {
                right = middle - 1;
            } else {
                return middle;
            }
        } 
        return -1;
    }
};



int main() {
    vector<int> nums = {-5, 1, 4, 9};
    int result;
    Solution solution1;
    result = solution1.search(nums, 4);
    cout << result <<endl;
    return 0;
}
