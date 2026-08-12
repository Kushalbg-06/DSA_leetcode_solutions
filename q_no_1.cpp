#2-sum problem brute force
class Solution {
    public:
        vector<int> twoSum(vector<int>& a, int target) {
            int n=a.size();
            for(int i=0;i<n;i++){
    
                for(int j=i+1;j<n;j++){
    
                    if(a[i]+a[j]==target){
                        
                        return {i,j};
                    }
                }
            }
            return {};
        }
    };
#time complexity:O(n^2)
#space complexity:O(1)


#optimal approach using the 2 pointer
class Solution {
    public:
        vector<int> twoSum(vector<int>& arr, int target) {
    
            // Store each element along with its original index
            // pair = {value, original index}
            vector<pair<int, int>> a;
    
            for (int i = 0; i < arr.size(); i++) {
                a.push_back({arr[i], i});
            }
    
            // Sort based on the values
            // We sort so that we can use the two-pointer approach
            sort(a.begin(), a.end());
    
            // Two pointers
            int i = 0;                  // points to the smallest value
            int j = arr.size() - 1;     // points to the largest value
    
            while (i < j) {
    
                // Calculate the sum of the two values
                int sum = a[i].first + a[j].first;
    
                // If sum equals target, return the ORIGINAL indices
                if (sum == target) {
                    return {a[i].second, a[j].second};
                }
    
                // If sum is greater than target,
                // decrease j to get a smaller value
                else if (sum > target) {
                    j--;
                }
    
                // If sum is smaller than target,
                // increase i to get a larger value
                else {
                    i++;
                }
            }
    
            // No pair found
            return {};
        }
    };
#time complexity:O(n log n)
#space complexity:O(n)