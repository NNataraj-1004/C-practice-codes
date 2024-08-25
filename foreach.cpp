//Exclusively to loop through elements in array !
//we use for each loop

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int array[4]={2,4,6,8};
    /*for(int i: array){
        cout<<i<<endl;
    }*/
    for(int  i:array){
        cout<<i<<endl;
    }
    
    return 0;
}