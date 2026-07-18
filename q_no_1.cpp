class Solution {
    public:
        vector<int> twoSum(vector<int>& arr, int target) {
            int n=arr.size();
            int a,b;
            int rem=0;
            for(int i=0;i<n;i++){
                rem=target-arr[i];
                for(int j=i+1;j<n;j++){
                    if(rem==arr[j]){
                        a=i;
                        b=j;
                        break;
                    }
                }
            }
            return {a,b};
        }
    };