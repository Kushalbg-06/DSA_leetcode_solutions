#136. Single Number
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int n = nums.size();
            int count = 0;
            int val;
            for (int i = 0; i < n; i++) {
                count = 0;
                for (int j = 0; j < n; j++) {
                    if (nums[j] == nums[i]) {
                        count++;
                    }
                }
                if (count == 1) {
                    return nums[i];
                }
            }
            return -1;
        }
    };