#283.Move Zeros
#2-pointer approach
class Solution {
    public:
        void moveZeroes(vector<int>& a) {
            int n=a.size();
            int j=0;
            for(int i=0;i<n;i++){
                if(a[i]!=0){
                    swap(a[i],a[j]);
                    j++;
                }
            }
        }
    };
#time complexity : O(n)
#space complexity :O(1)