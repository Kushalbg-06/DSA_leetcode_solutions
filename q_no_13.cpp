class Solution {
    public:
    int value(char c){
                if(c=='I'){
                    return 1;
                }
                else if(c=='V'){
                    return 5;
                }
                 else if(c=='V'){
                    return 5;
                } else if(c=='X'){
                    return 10;
                } else if(c=='L'){
                    return 50;
                } else if(c=='C'){
                    return 100;
                } else if(c=='D'){
                    return 500;
                } else if(c=='M'){
                    return 1000;
                }
                return 0;
            }
        int romanToInt(string s) {
            int len=s.length();
            int sum=0;
            
            
            for(int i=0;i<len;i++){
              int current=value(s[i]); 
                if(current<value(s[i+1])){
                sum -= value(s[i]);
                }
               else{
                sum +=value(s[i]);
               }
            }
            return sum;
        }
    };