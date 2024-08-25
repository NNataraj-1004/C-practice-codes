#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int tree[6]={0};
    tree[0]=1;
    tree[1]=2;
    tree[3]=3;
    tree[4]=4;
    tree[2]=5;
    for(int i:tree){
        cout<<i<<endl;
    }
    cout<<sizeof(tree)<<endl;
    int getarraylength=sizeof(tree)/sizeof(int);
    cout<<getarraylength;

    return 0;
}