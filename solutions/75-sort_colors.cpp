// Solution:
// Traverse the entire array, counting the occurrences of each color.
// Then, traverse it again to modify the array, arranging the colors 
// in sorted order based on their counts.
// Time Complexity: O(n)
// Space Complexity: O(1)



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                red++;
            } else if(nums[i] == 1) {
                white++;
            } else {
                blue++;
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if(red > 0) {
                nums[i] = 0;
                red--;
            } else if (white > 0) {
                nums[i] = 1;
                white--;
            } else {
                nums[i] = 2;
                blue--;
            }
        }
    }
};
