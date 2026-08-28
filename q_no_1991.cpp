#1991. Find the Middle Index in Array
#solved using prefix sum pattern
class Solution {
    public:
        int findMiddleIndex(vector<int>& a) {
            int n = a.size();
            vector<int> left(n);
            vector<int> right(n);
            int sum = 0;
            for (int i = 0; i < n; i++) {
                left[i] = sum;
                sum += a[i];
            }
            sum = 0;
            for (int j = n - 1; j >= 0; j--) {
                right[j] = sum;
                sum += a[j];
            }
            for (int i = 0; i < n; i++) {
                if (left[i] == right[i]) {
                    return i;
                }
            }
            return -1;
        }
    };
#time complexity:O(n)
#space complexity:O(1)