#152 Maximum Product Subarray
#brute force approach 
class Solution {
    public:
        int maxProduct(vector<int>& a) {
            int n = a.size();
            if (n == 1) {
                return a[0];
            }
            int product = 1;
            int maxproduct = 0;
            for (int i = 0; i < n; i++) {
                product = a[i];
                maxproduct = max(maxproduct, product);
                for (int j = i + 1; j < n; j++) {
                    product *= a[j];
                    maxproduct = max(maxproduct, product);
                }
                maxproduct = max(maxproduct, product);
            }
    
            return maxproduct;
        }
    };
#time complexity:O(n2)
#space complexity:O(1)
