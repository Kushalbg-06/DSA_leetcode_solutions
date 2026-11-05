#3131. Find the Integer Added to Array I
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {

        int mini1 = INT_MAX;
        int mini2 = INT_MAX;

        for(int i = 0; i < nums1.size(); i++) {
            mini1 = min(mini1, nums1[i]);
            mini2 = min(mini2, nums2[i]);
        }

        return mini2 - mini1;
    }
};
#time complexity:O(n)
#space complexity:O(1)