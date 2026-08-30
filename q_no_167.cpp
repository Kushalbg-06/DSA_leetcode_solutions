#167. Two Sum II - Input Array Is Sorted
#solved using two pointers
class Solution {
    public:
        vector<int> twoSum(vector<int>& a, int target) {
            int n = a.size();
            int l = 0;
            int r = n - 1;
            vector<int> ans(2);
            while (r > 0) {
                int sum = a[l] + a[r];
                if (sum == target) {
                    ans[0] = l + 1;
                    ans[1] = r + 1;
                    break;
                } else if (sum > target) {
                    r--;
                } else {
                    l++;
                }
            }
            return ans;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
