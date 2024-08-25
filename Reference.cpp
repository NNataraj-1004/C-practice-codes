#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct New_variable{
    int n;
    int &m=n;
};
int main(){
    New_variable car_tyre;
    car_tyre.n=1;
    cout<<"We are goin to learn references: "<<car_tyre.n<<endl;
    cout<<"Here is the second reference to be print :"<<car_tyre.m<<endl;
    cout<<&car_tyre.n<<endl;
    cout<<&car_tyre.m;
    return 0;
}
