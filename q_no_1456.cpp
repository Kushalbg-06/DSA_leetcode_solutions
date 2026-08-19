#1456.Maximum Number of Vowels in a Substring of Given Length
#optimal solution using sliding window pattern with constant k
class Solution {
    public:
        int maxVowels(string s, int k) {
            int n = s.size();
            int l = 0;
            int r = k - 1;
            int count = 0;
            int mx = 0;
            for (int i = 0; i < k; i++) {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u') {
                    count++;
                }
                mx = max(mx, count);
            }
            while (r < n - 1) {
                if (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' ||
                    s[l] == 'u') {
                    count--;
                }
                l++;
                r++;
                if (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' ||
                    s[r] == 'u') {
                    count++;
                }
    
                mx = max(mx, count);
            }
            return mx;
        }
    };
#time complexity :O(n)
#space complexity :O(1)