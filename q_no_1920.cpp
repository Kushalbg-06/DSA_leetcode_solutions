#1920. Build Array from Permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans;
     for(int i=0;i<n;i++){
        int index=nums[i];
        int value=nums[index];
        ans.push_back(value);
     }   
     return ans;
    }
};
#time complexity:O(n)
#space complexity:O(n)