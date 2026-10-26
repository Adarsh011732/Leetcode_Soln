class Solution {
public:
    char findTheDifference(string s, string t) {
        int as1=0, as2=0;
        for(auto x :s) as1+=(int)x;
        for(auto x :t) as2+=(int)x;
        return (char)(as2-as1);
    }
};