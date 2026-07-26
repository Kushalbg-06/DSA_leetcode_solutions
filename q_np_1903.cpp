class Solution {
    public:
        string largestOddNumber(string s) {
            int n=s.size();
            int index=0;
            string result="";
            for(int i=n-1;i>=0;i--){
                if((s[i]-'0')%2==1){
                    index=i;
                    break;
                }
    
            }
            if((s[index]-'0')%2==1)
            for(int i=0;i<=index;i++){
                result +=s[i];
            }
            return result;
        }
    };