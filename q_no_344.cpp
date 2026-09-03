#344 Reverse String
#solved by using two pointers approach
class Solution {
    public:
        void reverseString(vector<char>& s) {
            int n = s.size();
            int r = n - 1;
            int l = 0;
            while (r > l) {
                int temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            }
        }
    };
#time complexity: O(n)
#space complexity: O(1)