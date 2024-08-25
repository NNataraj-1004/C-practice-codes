#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    /*string text[4]={"asd","fgh","jkl","qwe"};
    //accesing elements in array
    cout<<text[2]<<endl;
    //changing the array element
    text[0]="qwe";
    cout<<text[0];
    return 0;*/
    int num_[6];
    num_[0]=1;
    num_[1]=2;
    num_[2]=3;
    num_[3]=4;
    num_[4]=5;
    num_[6]=6;
    for (int i=0; i<5; i++){
        cout<<i<<"="<<num_[i]<<endl;
    }
    return 0;
}