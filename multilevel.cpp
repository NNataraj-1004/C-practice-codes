#include<bits/stdc++.h>
using namespace std;
class one
{
    public:
    int c=1;
    one(){
            cout<<"THIS IS FIRST CLASS";
    }
};
class two:public one{

};
class three:public two{

};
int main(){
    three obj;
    return 0;
}