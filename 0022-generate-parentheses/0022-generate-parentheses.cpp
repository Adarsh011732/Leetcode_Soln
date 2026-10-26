class Solution {
    void back(int open, int close, string curr,int n, vector<string>&ans)
    {
        if(curr.size()==2*n)
        {
         ans.push_back(curr);
         return;
        }

        if(open<n) back(open+1, close, curr+"(", n, ans);
        if(close<open) back(open, close+1, curr+")", n ,ans);
    }
public:
    vector<string> generateParenthesis(int n) {
        string curr="";
        vector<string>ans;
        back(0, 0, curr, n, ans);
        return ans;
    }
};