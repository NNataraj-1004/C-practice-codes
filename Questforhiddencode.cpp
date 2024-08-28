//using recursive method :::

#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j, string &s1, string &s2,int &maxlength,int &idx,int count){
    if(i==s1.length() ||j==s2.length() )
    {
        return count;
    }

    if(s1[i]==s2[j])
    {
        count=solve(i+1,j+1,s1,s2,maxlength,idx,count+1);
        if(count>maxlength)
        {
            maxlength=count;
            idx=i-maxlength+1;
        }
    }

    int count1=solve(i+1,j,s1,s2,maxlength,idx,0);
    int count2=solve(i,j+1,s1,s2,maxlength,idx,0);

    return max(count,max(count1,count2));



}
int main(){
    string s1,s2;
    cin>>s1>>s2;
     
     int maxlength=0;
     int idx=0;

     int ans=solve(0,0,s1,s2,maxlength,idx,0);

     string temp=s1.substr(idx,maxlength);
     cout<<temp<<endl;
     
     int val=0;

     for(auto c:temp)
     {
        val+=c;
     }

     cout<<val<<endl;
}