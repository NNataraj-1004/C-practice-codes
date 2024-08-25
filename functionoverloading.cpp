//multiple functions can have same name with different paramaters
#include<iostream>
using namespace std;
int function1(int value1){
    return value1;
}
float function2(float value2){
    return value2;
}
int main(){
    int a=function1(2);
    float b=function2(2.0);
    cout<<a<<endl;
    cout<<b;
    return 0;
}