#include"headers.h"
using namespace std;
int main(){
    int array[]={5,6,3,4,1,2};
    int sum=0;
    int count=0;
    int avg;
    cout<<"The number are: ";
    for(int &i:array){
        cout<<i<<" ";
        sum+=i;
        ++count;
    }
    cout<<"\nThe sum is: "<<sum<<endl;
    avg=sum/count;
    cout<<"Their average= "<<avg<<endl;
    return 0;
}