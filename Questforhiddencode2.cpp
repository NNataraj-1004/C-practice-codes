//using dynamic programming

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;

    cin>>s1>>s2;

    int n=s1.length();
    int m=s2.length();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    int max_length=0;
    int row=0;
    int col=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                if(max_length<dp[i][j])
                {
                    max_length=dp[i][j];
                    row=i;
                    col=j;
                }
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    //cout<<m<<endl<<n;
    if(max_length==0)
    {
        cout<<0<<endl;
    }
    else{
        string temp="";
        while(dp[row][col]!=0)
        {
            temp=s1[row-1]+temp;
            row--;
            col--;
        }
        int val=0;
        for (auto c : temp)
        {
            val+=c;
        }
      cout<<val;

    }


}
