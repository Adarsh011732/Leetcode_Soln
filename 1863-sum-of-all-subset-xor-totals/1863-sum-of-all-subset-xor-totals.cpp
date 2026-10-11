class Solution {
    void solve(int index, vector<int>& nums, int currXor, int& sum) {
        if (index == nums.size()) {
            sum += currXor;
            return;
        }

        // Exclude the current element
        solve(index + 1, nums, currXor, sum);

        // Include the current element
        solve(index + 1, nums, currXor ^ nums[index], sum);
    }

public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        solve(0, nums, 0, sum);
        return sum;
    }
};