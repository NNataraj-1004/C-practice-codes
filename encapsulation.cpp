//using get set in encapsulation;
#include<bits/stdc++.h>
using namespace std;
class tomato
{
    private:
    int price;
    public:
    void setprice(int p){
        price=p;
    }
    int getprice(){
        return price;
    }
};
int main()
{
    tomato obj;
    obj.setprice(100);
    cout<<obj.getprice();
    return 0;
}