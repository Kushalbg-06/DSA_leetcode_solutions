#704. Binary Search
#Solved using binary Search
class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int low = 0;
            int high = n - 1;
            while (high >= low) {
                int mid = (low + high) / 2;
                if (nums[mid] == target) {
                    return mid;
                } else if (target > nums[mid]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return -1;
        }
    };
#time complexity:O(log n)
#space complexity:O(1)