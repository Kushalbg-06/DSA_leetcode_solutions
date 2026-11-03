#3190. Find Minimum Operations to Make All Elements Divisible by Three
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 3 == 1) {
                count += 1;
            } else if (nums[i] % 3 == 2) {
                count += 1;
            }
        }
        return count;
    }
};
#time complexity:O(n)
#space complexity:O(1)