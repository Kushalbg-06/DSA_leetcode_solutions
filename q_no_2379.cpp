#2379 Minimum Recolors to Get K Consecutive Black Blocks
#using sliding window pattern
class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.size();
            int minlen = 0;
            int count = 0;
            for (int i = 0; i < k; i++) {
                if (blocks[i] == 'W') {
                    count++;
                }
            }
            minlen = count;
            for (int i = k; i < n; i++) {
                if (blocks[i] == 'W') {
                    count++;
                }
                if (blocks[i - k] == 'W') {
                    count--;
                }
                minlen = min(minlen, count);
            }
            return minlen;
        }
    };
#time complexity:O(n)
#space complexity:O(1)