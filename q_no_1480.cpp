#1480. Running Sum of 1d Array
#solved using prefix sum pattern
class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        int n = a.size();
        vector<int> b(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            b[i] = sum;
        }
        return b;
    }
};

#time complexity:O(n)
#space complexity:O(n)