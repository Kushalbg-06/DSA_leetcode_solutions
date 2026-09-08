#438. Find All Anagrams in a String
#solved using sliding window
class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            int n = s.size();
            int m = p.size();
            vector<int> ans;
            if (n < m) {
                return ans;
            }
            vector<int> pCount(26, 0);
            vector<int> windowCount(26, 0);
            for (int i = 0; i < m; i++) {
                pCount[p[i] - 'a']++;  
            }
            for (int i = 0; i < m; i++) {
                windowCount[s[i] - 'a']++;
            }
            for (int i = 0; i <= n - m; i++) {
    
                
                if (windowCount == pCount) {
                    ans.push_back(i);
                }
                windowCount[s[i] - 'a']--;
                if (i + m < n) {
                    windowCount[s[i + m] - 'a']++;
                }
            }
    
            return ans;
        }
    };
#time complexity:O(n)
#space complexity:O(1)