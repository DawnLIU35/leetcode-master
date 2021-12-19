// leetcode 27 移除元素
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
            if (nums[fastIndex] != val) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        return slowIndex;
    }
};

int main() {
    vector<int> nums = {5,4};
    int result;
    Solution solution1;
    result = solution1.removeElement(nums, 4);
    cout << result << endl;
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i];
    }
    return 0;
}