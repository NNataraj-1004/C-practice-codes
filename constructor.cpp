#include<bits/stdc++.h>
using namespace std;
class dev{
    public:
       string frontend;
       string backend;
       string dbms;
       dev (string x, string y, string z):frontend(x), backend(y), dbms(z)
    {

    }
};
int main()
{
    dev roadmap("easy","tough","medium");
    cout<<roadmap.frontend<<" "<<roadmap.backend<<" "<<roadmap.dbms;
    return 0;
}