#1283. Find the Smallest Divisor Given a Threshold
#Solved using binary search
class Solution {
    public:
        int smallestDivisor(vector<int>& nums, int threshold) {
            int low = 1;
            int high = *max_element(nums.begin(), nums.end());
    
            while (low < high) {
                int mid = low + (high - low) / 2;
                int sum = 0;
    
                for (int num : nums) {
                    sum += (num + mid - 1) / mid;
                }
    
                if (sum <= threshold)
                    high = mid;
                else
                    low = mid + 1;
            }
    
            return low;
        }
    };
#time complexity:O(n log n)
#space complexity:O(1)
