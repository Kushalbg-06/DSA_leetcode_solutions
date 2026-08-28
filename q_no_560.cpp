#560 Subarray Sum Equals K
#solved using prefix sum pattern
class Solution {
    public:
        int subarraySum(vector<int>& a, int k) {
            int n = a.size();
            unordered_map<int, int> map;
            map[0] = 1;
            int prefixsum = 0;
            int count = 0;
            for (int i = 0; i < n; i++) {
                prefixsum += a[i];
                int remove = prefixsum - k;
                if (map.find(remove) != map.end()) {
                    count += map[remove];
                }
                map[prefixsum]++;
            }
            return count;
        }
    };
#time complexity:O(n)
#space complexity:O(1)