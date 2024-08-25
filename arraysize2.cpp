#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int item[8]={0,1,2,3,4,5,6,7};
    for(int i=0; i<sizeof(item)/sizeof(int);i++){
        cout<<item[i]<<endl;
    }
    return 0;
}