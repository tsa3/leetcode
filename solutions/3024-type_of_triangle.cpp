// Solution:
// First, verify that the three lengths can form a valid 
// triangle. Then, determine the type of triangle: 
// equilateral, isosceles, or scalene. Based on the side 
// lengths and the properties that define each type.
// Time Complexity: O(1)
// Space Complexity: O(1)

class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0] + nums[1] > nums[2] && nums[0] + nums[2] > nums[1] && nums[1] + nums[2] > nums[0]) {
            if(nums[0] == nums[1] && nums[1] == nums[2]) {
                return "equilateral";
            } else if(nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]) {
                return "isosceles";
            } else {
                return "scalene";
            }
        } else {
            return "none";
        }      
    }
};
