class Solution {
  vector<int> generateRow(int row)
  {
long long ans=1;
vector<int>ansRow;
ansRow.push_back(1);
for(int c=1;c<row;c++)
{
    ans*=(row-c);
    ans/=c;
    ansRow.push_back(ans);
}
return ansRow;
  }
public:
    vector<vector<int>> generate(int N) {
        vector<vector<int>>ans;
        for(int i=1;i<=N;i++)
        {
        ans.push_back(generateRow(i));
        }
        return ans;
    }
};