#88.Merge Sorted Array
#brute force Solution
#in this solution add the 2nd array to the end of the first array 
#then sort the first array
class Solution {
    public:
        void merge(vector<int>& a1, int m, vector<int>& a2, int n) {
            int j=0;
            
            for(int i=m; i<m+n; i++){
                    a1[i] = a2[j];
                    j++;
                }
            
            sort(a1.begin(), a1.end());
        }
    };
#time complexity : O((n+m)*log(m+n))
#space complexity: O(1)

#optimal approach (2 pointer approach)
#in this we intialize 3 pointer one in the end of the first array valid elements,2nd in the end of the second array and 3rd is the end of the first array
#compare the element from two array which is larger add to last of first array and increment pointer
class Solution {
    public:
        void merge(vector<int>& a1, int m, vector<int>& a2, int n) {
            int i=m-1;
            int j=n-1;
            int k=m+n-1;
            while(i>=0 && j>=0){
                if(a1[i]>a2[j]){
                    a1[k]=a1[i];
                    k--;
                    i--;
                }
                else{
                    a1[k]=a2[j];
                    k--;
                    j--;
                }
            }
            while(j>=0){ #add remaining element in  2nd array

                a1[k]=a2[j];
                k--;
                j--;
            }
            }
        
    };
#time complexity : O(m+n)
#space complexity: O(1)