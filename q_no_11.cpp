#11.Container with Most Water (pattern :two pointer)
#brute force approach 
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n=height.size();
            int maxarea=0;
            for(int i=0;i<n;i++){

                for(int j=i+1;j<n;j++){

                    int width = j-i;

                    int h = min(height[i],height[j]);

                    int area = width * h;

                    if(maxarea<area){
                        maxarea = area;
                    }
    
                }
            }
            return maxarea;
        }
    };

#time complexity:O(n^2)
#space complexity:O(1)

#optimal approach 
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n = height.size();
    
            int l = 0;
            int r = n - 1;
    
            int maxarea = 0;
    
            while (l < r) {
    
                int width = r - l;
                int h = min(height[l], height[r]);
    
                int area = width * h;
    
                if (maxarea < area) {
                    maxarea = area;
                }
    
                if (height[l] < height[r]) {
                    l++;
                }
                else {
                    r--;
                }
            }
    
            return maxarea;
        }
    };
#time complexity:O(n)
#space complexity:O(1)