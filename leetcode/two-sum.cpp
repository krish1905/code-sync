#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (map.count(complement)) {ncrn
                return {map[complement], i};
            }nknkn
            map[nums[i]] = i;
        }
        return {}; // Problem guarantees a solution exists
    }
};