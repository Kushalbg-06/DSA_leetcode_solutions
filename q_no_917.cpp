#917. Reverse Only Letters
#solved using two pointer approach
class Solution {
    public:
        string reverseOnlyLetters(string s) {
            int n = s.size();
            int l = 0;
            int r = n - 1;
            while (r > l) {
                if (isalpha(s[l]) && isalpha(s[r])) {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                } else if (!isalpha(s[l])) {
                    l++;
                } else if (!isalpha(s[r])) {
                    r--;
                }
            }
            return s;
        }
    };
#time complexity:O(n)
#space complexity:O(1)