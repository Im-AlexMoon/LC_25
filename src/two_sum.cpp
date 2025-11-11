#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// LeetCode 1: Two Sum
// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numMap.find(complement) != numMap.end()) {
                return { numMap[complement], i };
            }

            numMap[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution solution;

    // Test case 1
    vector<int> nums1 = { 2, 7, 11, 15 };
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Test 1: Input nums = [2,7,11,15], target = 9" << endl;
    cout << "Output: [" << result1[0] << "," << result1[1] << "]" << endl;
    cout << "Expected: [0,1]" << endl << endl;

    // Test case 2
    vector<int> nums2 = { 3, 2, 4 };
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    cout << "Test 2: Input nums = [3,2,4], target = 6" << endl;
    cout << "Output: [" << result2[0] << "," << result2[1] << "]" << endl;
    cout << "Expected: [1,2]" << endl << endl;

    // Test case 3
    vector<int> nums3 = { 3, 3 };
    int target3 = 6;
    vector<int> result3 = solution.twoSum(nums3, target3);
    cout << "Test 3: Input nums = [3,3], target = 6" << endl;
    cout << "Output: [" << result3[0] << "," << result3[1] << "]" << endl;
    cout << "Expected: [0,1]" << endl;

    return 0;
}
