#643.Maximum Average Subarray I
#optimal solution using sliding window pattern
class Solution {
    public:
        double findMaxAverage(vector<int>& arr, int k) {
            int n = arr.size();
            int sum = 0;
            double avg = 0;
            int l = 0;
            int r = k - 1;
            double mx = INT_MIN;
            for (int i = 0; i < k; i++) {
                sum += arr[i];
            }
            avg = (double)sum / k;
            mx = max(mx, avg);
            while (r < n - 1) {
                sum -= arr[l];
                l++;
                r++;
                sum += arr[r];
                avg = (double)sum / k;
                mx = max(mx, avg);
            }
            return mx;
        }
    };
#time complexity :O(n)
#space complexity :O(1)