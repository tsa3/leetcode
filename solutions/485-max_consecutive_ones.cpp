// Time complexity: O(n)
// Space complexity: O(1)

// The solution involves iterating through the nums array. We increment the current variable 
// if the current element is one at each position. If the element is not one, we update the 
// answer variable if the current is greater than the existing answer and then reset the 
// current to zero. After finishing the iteration, we perform a final check to ensure the 
// last sequence of 1s is accounted for by comparing the current and answer one last time.
// This approach has a time complexity of O(n) since we traverse the array exactly once and
// a space complexity of O(1), as we only use a few integer variables.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int answer = 0, current = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                current++;
            } else {
                if(current > answer) {
                    answer = current;
                }
                current = 0;
            }
        }
        if(current > answer) {
            answer = current;
        }
        return answer;
    }
};