class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        for(int i=nums.size()-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1]) {
                idx=i;
                break;
            }
        }
    
    if(idx==-1)
    {
     reverse(nums.begin(),nums.end());   // given biggest permutation return the first permutation in sorted order
    }
    else
    {
  for(int i=nums.size()-1;i>=0;i--)
  {
    if(nums[i]>nums[idx]){
        swap(nums[i],nums[idx]);    //pehle smallest form rightmost
        break;
    }
  }
   reverse(nums.begin()+idx+1,nums.end());
    }
}};