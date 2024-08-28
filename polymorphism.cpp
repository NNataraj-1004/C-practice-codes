#include<bits/stdc++.h>
using namespace std;
class one
{
    public:
    int c=1;
    one(){
            cout<<"THIS IS FIRST CLASS"<<endl;
    }
};
class two:public one{
    public:
    two(){
        cout<<"THIS IS SECOND CLASS"<<endl;
    }
};
class three:public two{
    public:
    three(){
        cout<<"THIS IS THIRD CLASS"<<endl;
    }
};
int main(){
    three obj3;
    two obj2;
    one obj1;
    return 0;
}