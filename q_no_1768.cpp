#1768. Merge Strings Alternately
#solved using two pointer
class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int n = word1.size();
            int m = word2.size();
            int l = 0;
            int r = 0;
            string merge;
            while (l < n || r < m) {
                if (l < n) {
                    merge += word1[l];
                    l++;
                }
                if (r < m) {
                    merge += word2[r];
                    r++;
                }
            }
            return merge;
        }
    };
#time complexity:O(n+m)
#space complexity:O(n+m)