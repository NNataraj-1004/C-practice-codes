#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    switch(n){
        case 1:
          cout<<"You entered case 1 "<<n<<endl;
          break;
        case 2:
          cout<<"You entered case 1 "<<n<<endl;
          break;
        case 3:
          cout<<"You entered case 1 "<<n<<endl;
          break;
        default:
          cout<<"Unproper value of n: "<<n;
          break;
    }
}