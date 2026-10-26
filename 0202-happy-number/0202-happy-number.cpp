class Solution {
public:
   int sqsum(int n)
   {
    int s=0;
    while(n>0)
    {
      s+=(n%10)*(n%10);
      n/=10;
    }
    return s;
   }
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(true)
        {
            n=sqsum(n);
             if(n==1) return true;
            if(seen.count(n)) return false;   // if already processed -> loop aa jaega--> return false; 
            seen.insert(n);
                }
    }
};