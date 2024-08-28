#include<iostream>
using namespace std;
class Newclass{
    public:
    int num;
    string letter;
    void method(){
    }
};
int main(){
    Newclass Newobject;
    Newobject.method();
    Newclass Newobject1;
    Newobject1.method();
    Newobject.num=11;
    Newobject.letter="Queen";
    Newobject1.num=12;
    Newobject1.letter="King";
    cout<<Newobject.num<<"\n"<<Newobject1.num<<"\n";
    cout<<Newobject.letter<<"\n"<<Newobject1.letter;
    return 0;
}