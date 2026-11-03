#2011. Final Value of Variable After Performing Operations
class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int n=arr.size();
        int val=0;
        for(int i=0;i<n;i++){
            if(arr[i]=="--X"||arr[i]=="X--"){
                val=val-1;
            }
           else if(arr[i]=="++X"||arr[i]=="X++"){
                val=val+1;
            }
        }  
        return val;
    }
};