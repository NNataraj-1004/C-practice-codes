#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int rounds, noof_p, cof_ship;
    cin>>cof_ship>>noof_p;
    rounds=noof_p/cof_ship;
    double val=noof_p/cof_ship;
    if (val!=0){
        rounds+=1;
    }
        cout<<rounds<<endl;
        return 0;
    }