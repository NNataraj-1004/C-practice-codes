#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    cout<<"Enter a name to print in : ";
    getline(cin,name);
    cout<<"Therefore the name entered is : "<<name<<endl;
    char str='d';
    char str2[]="Hollo";
    cout<<str<<endl<<str2;
    return 0;
}