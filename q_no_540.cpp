#540  Single Element in a Sorted Array
#solved using binary tree
class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
            int n = nums.size();
            int l = 0;
            int r = n - 1;
            while (r > l) {
                int mid = (l + r) / 2;
                if (mid % 2 == 0 && nums[mid] == nums[mid + 1] ||
                    mid % 2 == 1 && nums[mid] == nums[mid - 1]) {
                    l = mid + 1;
                } else {
                    r = mid;
                }
            }
            return nums[l];
        }
    };
#time complexity:O(log n)
#space complexity:O(1)