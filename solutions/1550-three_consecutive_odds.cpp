// Solution:
// The approach is to traverse the array while using a counter variable cont to keep 
// track of the number of consecutive odd numbers.
// * If the current number is odd, increment cont.
// * If it's even, reset cont to 0.
// * If cont reaches 3 at any point, return true.
// * If the end of the array is reached without finding three consecutive odd numbers,
//  return false.
// Time Complexity: O(n)
// Space Complexity: O(1)



class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cont = 0;
        for(auto num:arr) {
            if(num % 2 == 1) {
                cont++;
                if(cont == 3) {
                    return true;
                }
            }
            else {
                cont = 0;
            }
        }
        return false;
    }
};