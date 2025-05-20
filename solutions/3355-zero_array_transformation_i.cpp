// Solution:
// First, compute the differenceArray using queries. 
// Then, calculate the prefix sum of differenceArray. 
// Finally, update the nums array with the differenceArray
// and check if all elements of the its elements
// are less than or equal to zero; if this is 
// accurate, return true, otherwise false
// Time Complexity: O(n)
// Space Complexity: O(n+1)



class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> differenceArray(nums.size()+1, 0);
        for(int i = 0; i < queries.size(); i++) {
            differenceArray[queries[i][0]] += 1;
            differenceArray[queries[i][1] + 1] -= 1;
        }
        for(int i = 1; i < differenceArray.size(); i++) {
            differenceArray[i] += differenceArray[i-1];
        }
        for(int i = 0; i < nums.size(); i++) {
            nums[i] -= differenceArray[i];
            if(nums[i] > 0) {
                return false;
            }
        }
        return true;
    }
};
