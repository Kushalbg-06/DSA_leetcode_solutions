#904 Fruit Into Baskets
#solve using sliding window pattern
class Solution {
    public:
        int totalFruit(vector<int>& fruits) {
            int n = fruits.size();
            unordered_map<int, int> map;
            int l = 0;
            int r = 0;
            int count = 0;
            for (int r = 0; r < n; r++) {
                map[fruits[r]]++;
                while (map.size() > 2) {
                    map[fruits[l]]--;
                    if (map[fruits[l]] == 0) {
                        map.erase(fruits[l]);
                    }
                    l++;
                }
                count = max(count, r - l + 1);
            }
            return count;
        }
    };
#time complexity:O(n)
#space complexity:O(n)