#728. Self Dividing Numbers
class Solution {
    public:
        vector<int> selfDividingNumbers(int left, int right) {
    
            vector<int> ans;
    
            for (int i = left; i <= right; i++) {
    
                int num = i;
                bool valid = true;
    
                while (num > 0) {
    
                    int digit = num % 10;
    
                    if (digit == 0) {
                        valid = false;
                        break;
                    }
    
                    if (i % digit != 0) {
                        valid = false;
                        break;
                    }
    
                    num = num / 10;
                }
    
                if (valid) {
                    ans.push_back(i);
                }
            }
    
            return ans;
        }
    };
#time complexity:O(n)
#space complexity:O(n)