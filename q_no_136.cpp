#136. Single Number
#brute force approach
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int n = nums.size();
            int count = 0;
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
#time complexity:O(n**2)
#space complexity:O(1)

#optimal approach
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int n = nums.size();
            int res = 0;
            for (int i = 0; i < n; i++) {
                res ^= nums[i];
            }
            return res;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
