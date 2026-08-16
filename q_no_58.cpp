#58.Length of Last Word
#optimal approach
class Solution {
    public:
        int lengthOfLastWord(string s) {
            int n=s.size();
            int count=0;
            int i=n-1;
            while(i>=0 && s[i]==' '){ #check from last skip the spaces
                i--;
            }
            while(i>=0 && s[i]!=' '){
                count++;        #count length of the last word
                i--;    
            }
            
            return count;
        }
    };

#time complexity : O(n)
#space complexity : O(1)

#other approach
class Solution {
    public:
        int lengthOfLastWord(string s) {
            int n=s.size();
            int count=0;
            for(int i=n-1;i>=0;i--){
                if(s[i]==' '){
                    if(count>0){
                        break;
                    }
                }
                else{
                    count++;
                }
            }
            return count;
        }
    };

#time complexity : O(n)
#space complexity : O(1)