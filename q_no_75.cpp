#75.Sort Colours
#brute force approach
#by using sorting algo selection sort ,quick sort,merge sort any one of these
class Solution {
    public:
        void sortColors(vector<int>& a) {
            int n = a.size();
    
            for (int i = 0; i < n - 1; i++) {
                int min = i;
    
                for (int j = i + 1; j < n; j++) {
                    if (a[j] < a[min]) {
                        min = j;
                    }
                }
    
                swap(a[i], a[min]);
            }
        }
    };
#time complexity=O(n^2)
#space comlexity=O(1)

#optimal approach
#by using the Dutch National Flag Algorithm/Three pointer approach
class Solution {
    public:
        void sortColors(vector<int>& a) {
            int n=a.size();
            int mid=0;
            int low=0;
            int high=n-1;
            while(mid<=high){
                if(a[mid]==0){
                    swap(a[mid],a[low]); #swap and increment pointer low and mid when the a[mid]==0 because all 0's are come before mid or 1's
                    mid++;
                    low++;
                }
                else if(a[mid]==1){
                    mid++;  #increment mid pointer when a[mid]==1
                }
                else{
                    swap(a[mid],a[high]); #swap and increment pointer high and mid when the a[mid]==2 because all 2's are come before mid or 1's
                    high--;
                }
            }
        }
    };
#time complexity:O(n)
#space complexity:O(1)