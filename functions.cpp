#include<iostream>
#include<string>
using namespace std;
int mainfun(int value1, int value2, int value3){
    cout<<"value 1:"<<value1<<" value 2:"<<value2<<" value 3:"<<value3<<"\n";
    return value2+value1-value3;
}
int main(){
    mainfun(2,3,4);
    mainfun(3,4,5);
    mainfun(4,5,6);
    cout<<mainfun(2,5,7);

    return 0;

}