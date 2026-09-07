#796 Rotate String
class Solution {
    public:
        bool rotateString(string s, string goal) {
            if (s.size() != goal.size()) {
                return false;
            }
            string temp = s + s;
            if (temp.find(goal) != string::npos) {
                return true;
            }
            return false;
        }
    };
#time complexity:O(n)
#space complexity:O(n)