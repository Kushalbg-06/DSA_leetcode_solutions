#1343 Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
#optimal solution using sliding window with fixed size k
class Solution {
    public:
        int numOfSubarrays(vector<int>& arr, int k, int threshold) {
            int n = arr.size();
            int sum = 0;
            double avg = 0;
            int count = 0;
            int l = 0;
            int r = k - 1;
            for (int i = 0; i < k; i++) {
                sum += arr[i];
            }
            avg = (double)sum / k;
            if (avg >= threshold) {
                count++;
            }
            while (r < n - 1) {
                sum -= arr[l];
                l++;
                r++;
                sum += arr[r];
                avg = (double)sum / k;
                if (avg >= threshold) {
                    count++;
                }
            }
            return count;
        }
    };
#time complexity:O(n)
#space complexity:O(1)