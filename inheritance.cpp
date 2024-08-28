#include<bits/stdc++.h>
using namespace std;
class fruits
{
    public:
    string name="jake";
    void jake(){
        cout<<"this is jake fruit"<<endl;
    }
};
class taste:public fruits
{
    public:
    string taste="sweet";
};
int main(){
    taste tasty;
    tasty.jake();
    cout<<"the fruit name is :"<<tasty.name<<endl;
    cout<<"the taste of the fruit is :"<<tasty.taste;
    return 0;
}