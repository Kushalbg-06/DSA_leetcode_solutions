#189 Rotate Array
#brute force approach 
class Solution {
    public:
        void rotate(vector<int>& a, int k) {
            int n = a.size();
            k = k % n;
            for (int i = 0; i < k; i++) {
                int last = a[n - 1];
                for (int j = n - 1; j > 0; j--) {
                    a[j] = a[j - 1];
                }
                a[0] = last;
            }
        }
    };
#time complexity:O(n2)
#space complexity:O(1)

#optimal approach
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
        int n=k%(nums.size());
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+n,nums.end());
        reverse(nums.begin(),nums.begin()+n);
        }
    };
#time complexity:O(n)
#space complexity:O(1)