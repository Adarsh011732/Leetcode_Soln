class Solution {
public:
    int longestBeautifulSubstring(string word) {
      int maxi=0;
      int n=word.size();
      int left=0,v=1;
      for(int i=1;i<n;i++)
       {
        if(word[i]<word[i-1]) 
        {
         left=i;
         v=1;
        }
        else if(word[i]>word[i-1])
        {
            v++;
        }
        if(v==5) maxi=max(maxi,i-left+1);
       }
return maxi;
        
    }
};