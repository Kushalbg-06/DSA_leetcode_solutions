#27. Remove element
#two pointer approach
class Solution {
    public:
        int removeElement(vector<int>& a, int val) {
            int n=a.size();
            int i=0; #1st pointer
            int j=n-1; #2nd pointer
            while(i<=j){
                if(a[i]==val){

                    swap(a[i],a[j]);
                    j--;
                }
                else{

                    i++;
                }
            }
            return i; #return number of index not contain the value given
        }
    };
    
#time complexity:O(n)
#space complexity:O(1)

#other approach
class Solution {
    public:
        int removeElement(vector<int>& a, int val) {
            int n=a.size();
            int index=0;
            for(int i=0;i<n;i++){
                if(a[i]!=val){

                    a[index]=a[i];

                    index++;
                }
    
            }
            return index;
        }
    };

#time complexity:O(n)
#space complexity:O(1)
    