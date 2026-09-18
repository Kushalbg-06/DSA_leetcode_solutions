1189. Maximum Number of Balloons
class Solution {
    public:
        int maxNumberOfBalloons(string text) {
            int m = text.size();
            int b = 0, a = 0, l = 0, o = 0, n = 0;
            int mini = INT_MAX;
            for (int i = 0; i < m; i++) {
                if (text[i] == 'b') {
                    b++;
                } else if (text[i] == 'a') {
                    a++;
                } else if (text[i] == 'l') {
                    l++;
                } else if (text[i] == 'o') {
                    o++;
                } else if (text[i] == 'n') {
                    n++;
                }
            }
            mini = min({b, a, l / 2, o / 2, n});
            return mini
        }
    };
#time complexity:O(m)
#space complexity:O(1)
