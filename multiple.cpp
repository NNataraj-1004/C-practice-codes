#include<bits/stdc++.h>
using namespace std;
class one
{
    private:
    int classno;
    public:
    void setvalue(int c){
        classno=c;
    }
    int getvalue(){
        return classno;
    }
};
class two
{
    public:
    int classnoo=2;
    two(){
        cout<<"YOU HAVE ENTERED INTO CLASS TWO"<<endl;
    }
};
class onetwo:public one,public two{

};
int main(){
    onetwo twoone;
    twoone.setvalue(1);
    cout << "Value from class one: " << twoone.getvalue() << endl;
    cout << "Value from class two: " << twoone.classnoo<< endl;
    return 0;
}
