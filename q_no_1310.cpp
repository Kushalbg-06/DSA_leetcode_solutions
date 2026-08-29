#1310 XOR Queries of a Subarray
#solved using prefix sum pattern
class Solution {
    public:
        vector<int> xorQueries(vector<int>& a, vector<vector<int>>& queries) {
            int n = a.size();
            vector<int> prefix(n);
            prefix[0] = a[0];
            for (int i = 1; i < n; i++) {
                prefix[i] = prefix[i - 1] ^ a[i];
            }
            int m = queries.size();
            vector<int> res(m);
            for (int k = 0; k < m; k++) {
                int i = queries[k][0];
                int j = queries[k][1];
                if (i == 0) {
                    res[k] = prefix[j];
                } else {
                    res[k] = prefix[j] ^ prefix[i - 1];
                }
            }
            return res;
        }
    };
#time complexity:O(n)
#space complexity:O(n)