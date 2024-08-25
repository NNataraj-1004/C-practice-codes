#include"Headers.h"
using namespace std;
int  main(){
    int school[5]={0,1,2,3,4};
    int len_school=sizeof(school)/sizeof(school[0]);
    /*for(int i=0;i<20;i++){
        school[i]=i;
    }
    for(int i=0;i<=9;i++){
        cout<<"school[ "<<i<< "]="<<""<<school[i]<<endl;
    }
    for(int i=10;i<20;i++){
        cout<<"school[" <<i<< "]="<<school[i]<<endl;
    }*/
    for (int i=0;i<len_school;i++){
        cout<<"Memory address of school["<<i<<"]= "<<&school[i]<<endl;
    }
    return 0;
}