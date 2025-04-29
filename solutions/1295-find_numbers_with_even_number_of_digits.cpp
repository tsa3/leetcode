// Time complexity: O(n)
// Space complexity: O(1)

// The solution involves iterating through the nums array and checking the number of
// digits in each element. To do this, we convert each number to a string and check 
// its length. If the number of digits is even, we increment a counter variable.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int quantity = 0;
        for(int i = 0; i < nums.size(); i++) {
            string temp = to_string(nums[i]);
            if(temp.size() % 2 == 0)
                quantity++;
        }
        return quantity;
    }
};