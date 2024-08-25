#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct typo {
        int mynum;
        string mystring;
};
int main(){
    typo myStructure;
    myStructure.mynum=1;
    myStructure.mystring="Hello world";
    typo myStruct1;
    myStruct1.mynum=2;
    myStruct1.mystring="Bye world";
    typo myStruct2;
    myStruct2.mynum=3;
    myStruct2.mystring="Bye world";
    cout<<myStructure.mynum<<endl;
    cout<<myStructure.mystring<<endl;
    cout<<myStruct1.mynum<<" "<<myStruct1.mystring<<endl;
    cout<<myStruct2.mynum<<" "<<myStruct2.mystring<<endl;
    return 0;
}