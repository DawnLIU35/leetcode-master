// leetcode 209 长度最小的子数组
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX;
        int sum = 0;
        int i = 0;
        int length = 0;
        for (int j=0; j<nums.size(); j++) {
            sum += nums[j];
            while (sum >= target) {
                length = j - i +1;
                result = result > length ? length : result;
                sum -= nums[i++];
            }

        }
        return result == INT32_MAX ? 0 : result;
    }
};

int main() {
    vector<int> nums = {3,4,5,6,1,4,6};
    int target = 11;
    int result;
    Solution solution0;
    result = solution0.minSubArrayLen(target, nums);
    cout << result << endl;
    return 0;
}