#include<iostream>
#include<string>
using namespace std;
enum level{
    Low=10,
    Medium,
    High
};
int main(){
    enum level MYvar=High;
   // cout<<MYvar;
   // return 0;
   switch(MYvar){
    case 1:
        cout<<"This is:case "<<MYvar;
        break;
    case 2:
        cout<<"This is:case "<<MYvar;
        break;
    case 3:
        cout<<"This is:case "<<MYvar;
        break;
    default:
        cout<<"Out of bonds: case "<<MYvar;
        break;
   }
}