#5.Longest Palindromic Substring
#brute force approach
class Solution {
    public:
        string longestPalindrome(string s) {
            int n = s.size();
            int a = 0;
            int b = 0;
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n; j++) {
                    int l = i;
                    int r = j;
                    int found = 1;
                    while (r > l) {
                        if (s[l] != s[r]) {
                            found = 0;
                            break;
                        }
                        l++;
                        r--;
                    }
                    if (found == 1) {
                        if (j - i > b - a) {
                            a = i;
                            b = j;
                        }
                    }
                }
            }
            string s1;
            for (int i = a; i <= b; i++) {
                s1 += s[i];
            }
            return s1;
        }
    };
#time complexity:O(n^3)
#space complexity:O(n)

#another approach
class Solution {
    public:
        std::string longestPalindrome(std::string s) {
            if (s.length() <= 1) {
                return s;
            }
            
            int max_len = 1;
            std::string max_str = s.substr(0, 1);
            
            for (int i = 0; i < s.length(); ++i) {
                for (int j = i + max_len; j <= s.length(); ++j) {
                    if (j - i > max_len && isPalindrome(s.substr(i, j - i))) {
                        max_len = j - i;
                        max_str = s.substr(i, j - i);
                    }
                }
            }
    
            return max_str;
        }
    
    private:
        bool isPalindrome(const std::string& str) {
            int left = 0;
            int right = str.length() - 1;
            
            while (left < right) {
                if (str[left] != str[right]) {
                    return false;
                }
                ++left;
                --right;
            }
            
            return true;
        }
    };
