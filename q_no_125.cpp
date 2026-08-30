#125 Valid Palindrome
class Solution {
    public:
        bool isPalindrome(string s) {
            int n = s.size();
            string s1;
            for (int i = 0; i < n; i++) {
                if (isalnum(s[i])) {
                    s1 += tolower(s[i]);
                }
            }
            int l = 0;
            int r = s1.size() - 1;
            while (l < r) {
                if (s1[l] != s1[r]) {
                    return false;
                }
                l++;
                r--;
            }
            return true;
        }
    };
#time complexity:O(n)
#space complexity:O(n)