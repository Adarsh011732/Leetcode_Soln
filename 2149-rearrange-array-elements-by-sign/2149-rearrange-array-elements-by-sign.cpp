class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>ans(nums.size());
       int posidx=0, negindx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0){ ans[2*posidx]=nums[i]; posidx++;}
            else
            {
                ans[2*negindx+1]=nums[i];
                negindx++;
            }

        } 
        return ans;
    }
};