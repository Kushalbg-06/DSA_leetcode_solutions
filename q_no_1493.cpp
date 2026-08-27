#1493  Longest Subarray of 1's After Deleting One Element
#solved using sliding window variable size pattern
class Solution {
    public:
        int longestSubarray(vector<int>& a) {
            int n = a.size();
            int l = 0;
            int r = 0;
            int maxlen = 0;
            int count = 0;
            for (int r = 0; r < n; r++) {
                if (a[r] == 0) {
                    count++;
                }
                while (count > 1) {
                    if (a[l] == 0) {
                        count--;
                    }
                    l++;
                }
                maxlen = max(maxlen, r - l + 1);
            }
            return maxlen - 1;
        }
    };
#time complexity :O(n)
#space complexity :O(1)