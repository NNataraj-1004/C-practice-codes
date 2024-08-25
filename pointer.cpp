#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string food="ice";
    string* ptr=&food;
    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<ptr<<endl;
    *ptr="Cream";
    cout<<*ptr<<endl;
    cout<<food<<endl;
    return 0;
}