#3823 Reverse Letters Then Special Characters in a String
#solved using two pointer approach
class Solution {
    public:
        string reverseByType(string s) {
            int n = s.size();
            int l = 0;
            int r = n - 1;
    
            while (r >= l) {
                if (isalpha(s[l]) && isalpha(s[r])) {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }
                else if (isalpha(s[l]) && !isalpha(s[r])) {
                    r--;
                }
                else if (!isalpha(s[l]) && isalpha(s[r])) {
                    l++;
                }
            }
    
            l = 0;
            r = n - 1;
    
            while (r >= l) {
                if (!isalpha(s[l]) && !isalpha(s[r])) {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }
                else if (isalpha(s[l]) && !isalpha(s[r])) {
                    l++;
                }
                else if (!isalpha(s[l]) && isalpha(s[r])) {
                    r--;
                }
            }
    
            return s;
        }
    };
#time complexity:O(n)
#space complexity:O(1)