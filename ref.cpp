#include<bits/stdc++.h>
using namespace std;
int main(){

    //reference
    int i=0;
    int &j=i;
    cout<<i<< " "<<j<<endl;
    cout<<&i<< " "<<&j<<endl;
    cout<<"\n";
    //pointers
    string ii="gooood!";
    string* jj=&ii;
    cout<<ii<< " "<<jj<<endl;
    cout<<&ii<< " "<<&jj<<endl;
    cout<<*jj<<endl;
    *jj="baddd!";
    cout<<*jj<<endl;
    return 0;
}
