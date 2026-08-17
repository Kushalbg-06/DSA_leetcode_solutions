#2016.Maximum Difference Between Increasing Elements
#Brute force approach
class Solution {
    public:
        int maximumDifference(vector<int>& a) {
            int n = a.size();
            int maxi = -1;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (a[j] > a[i]) {
                        int sum = a[j] - a[i];
                        maxi = max(maxi, sum);
                    }
                }
            }
    
            return maxi;
        }
    };

#time complexity : O(n^2)
#space complexity :O(1)

#optimal Solution
class Solution {
    public:
        int maximumDifference(vector<int>& a) {
            int n = a.size();
            int min = a[0];
            int maxi = -1;
            for (int i = 0; i < n; i++) {
                if (a[i] > min) {
                    maxi = max(maxi, a[i] - min);
                } else {
                    min = a[i];
                }
            }
            return maxi;
        }
    };
#time complexity : O(n)
#space complexity :O(1)