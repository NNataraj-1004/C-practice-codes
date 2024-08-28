#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    int age=15;
    try{
        int age=15;
        if(age>18){
            cout<<"Access granted - you are old enough.";
        }else{
            throw(age);
        }
    }
catch (int num){
    cout<<"Access denied you must be atleast 18 years old!"<<endl;
    cout<<"age is:"<<num;
}
}
