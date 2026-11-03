class Solution {
public:
    int minMoves(vector<int>& nums) {

        int min=*min_element(nums.begin(),nums.end());
        int min_moves=0;
        for(auto x: nums) min_moves+=x-min;
        return min_moves;
        
    }
};