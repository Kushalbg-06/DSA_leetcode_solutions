#Concatenate Array With Reverse
#brute force approach
class Solution {
    public:
        vector<int> concatWithReverse(vector<int>& nums) {
            vector<int> a;

            int j=0;

            int n=nums.size();

            for(int i=0;i<n;i++){

               a.push_back(nums[i]); #first it add original array
            } 
            for(int i=n-1;i>=0;i--){

                a.push_back(nums[i]); #then add the reverse of the original array
            }
            return a;
        }
    };
#time complexity=O(n^2)
#space complexity=O(n)

#optimal approach
class Solution {
    public:
        vector<int> concatWithReverse(vector<int>& arr) {
            int n=arr.size();

            for(int i=n-1;i>=0;i--){

                arr.push_back(arr[i]);
            }
            return arr;
        }
    };
#time complexity:O(n)
#space complexity:O(1)