class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int min_moves=0;
        for(auto x: nums) min_moves+=max-x;
        return min_moves;
    }
};