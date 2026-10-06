#231. Power of Two
class Solution {
    public:
        bool isPowerOfTwo(int n) {
           if(n<=0){
            return false;
           } 
           while(n%2==0){
            n/=2;
           }
           if(n==1){
            return true;
           }
           else{
            return false;
           }
            
        }
    };
#time complexity:O(n)
#space complexity:O(1)

