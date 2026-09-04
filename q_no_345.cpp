#345 Reverse Vowels of a String
#Solved using 2 pointer pattern
class Solution {
    public:
        string reverseVowels(string s) {
            int l = 0;
            int r = s.size() - 1;
            string vowels = "aeiouAEIOU";
    
            while (l < r) {
                while (l < r && vowels.find(s[l]) == string::npos){ #loop run until find the vowel letter
                    l++;
                }
    
                while (l < r && vowels.find(s[r]) == string::npos){
                    r--;
                }
    
                swap(s[l], s[r]);
                l++;
                r--;
            }
    
            return s;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
