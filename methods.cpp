#include<iostream>
using namespace std;
class myclass{
    public:
    int myMethod(int num1);
};
int myclass::myMethod(int num1)
{
        return num1;
    }
int main(){
    myclass myobj;
    cout<<myobj.myMethod(2);
    return 0;
}