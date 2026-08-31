#881 Boats to Save People
class Solution {
    public:
        int numRescueBoats(vector<int>& a, int limit) {
            int n=a.size();
            int l=0;
            int r=n-1;
            int count=0;
            sort(a.begin(),a.end());
            while(l<=r){
              int sum=a[r]+a[l];
              if(sum<=limit){
                r--;
                l++;
              }
              else{
                r--;
              } 
              count++; 
            }
            return count;
        }
    };
#time complexity:O(n log n)
#space complexity:O(1)