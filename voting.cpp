#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int age,votingage;
    votingage=21;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>=votingage){
        cout<<"You can vote:"<<age<<endl;
        }else{
            cout<<"You cant vote:"<<age;
        }
    return 0;
}