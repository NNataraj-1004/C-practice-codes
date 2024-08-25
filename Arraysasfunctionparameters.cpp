#include<iostream>
using namespace std;
void Array1(int Array2[5]){
    for(int i=0;i<5;i++){
        cout<<Array2[i]<<"\n";
    }
}
int main(){
    int Array2[5]={1,2,3,4,5};
    Array1(Array2);
    return 0;
} 