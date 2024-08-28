#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,v,vn;
    cin>>h>>v>>vn;
    int ans=(h)*((v/vn)*(v/vn));
    cout<<ans<<endl;
    return 0;
}