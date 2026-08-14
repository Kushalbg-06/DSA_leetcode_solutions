#28.Find the Index of the First Occurrence in a String
#brute force string matching approach
class Solution {
    public:
        int strStr(string haystack, string needle) {
            int n=haystack.size();
            int m=needle.size();
            for(int i=0;i<=n-m;i++){

                int j=0; #if one of the element not matched it reset j=0

                while(j<m && haystack[i+j]==needle[j]){
                    j++;
                }
                if(j==m){
                    return i;
                }
            }
            return -1;
        }
    };

#time complexity : O(n*m)
#space complexity:O(1)