#1111. Maximum Nesting Depth of Two Valid Parentheses Strings
class Solution {
    public:
        vector<int> maxDepthAfterSplit(string s) {
            int n = s.size();
            int count = 0;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                if (s[i] == '(') {
                    count++;
                    a[i] = count % 2; 
                } else {
                    a[i] = count % 2;
                    count--;
                }
            }
            return a;
        }
    };
#time complexity:O(n)
#space complexity:O(n)
