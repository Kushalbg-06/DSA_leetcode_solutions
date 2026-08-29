#303. Range Sum Query - Immutable
#solved using prefix sum pattern
class NumArray {

    public:
        vector<int> a;
        NumArray(vector<int>& nums) {
            a = nums;
            int n = a.size();
            int sum = 0;
            for (int i = 1; i < n; i++) {
                a[i] += a[i - 1];
            }
        }
    
        int sumRange(int left, int right) {
            if (left == 0) {
                return a[right];
            } else {
                return a[right] - a[left - 1];
            }
        }
    };
    
#time complexity:O(n)
#space complexity:O(n)