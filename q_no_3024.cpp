#3024.Type of Triangle
class Solution {
public:
    string triangleType(vector<int>& a) {
        int n=a.size();
        if(a[0]+a[1]>a[2] && a[0]+a[2]>a[1] && a[1]+a[2]>a[0]){
            if(a[0]==a[1] && a[1]==a[2]){
                return "equilateral";
            }
            else if(a[0]==a[1] ||a[1]==a[2] ||a[0]==a[2]){
                return "isosceles";
            }
            else{
                return "scalene";
            }
        }
        else{
            return "none";
        }
    }
};