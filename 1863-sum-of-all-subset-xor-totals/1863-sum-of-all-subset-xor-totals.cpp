class Solution {
     void solve(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        
        // Step 1: store current subset
        result.push_back(current);

        // Step 2: try all choices from current index
        for(int i = index; i < nums.size(); i++) {
            
            // include element
            current.push_back(nums[i]);

            // recursive call
            solve(i + 1, nums, current, result);

            // backtrack (undo)
            current.pop_back();
        }
    }
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>sub;
        vector<int>curr;
        solve(0,nums, curr, sub);
       int sum=0;
       for(auto x:sub)
       { 
        int Xor=0;
        for(auto a:x) Xor=Xor^a;
        sum+=Xor;
       }
return sum;
    }
};