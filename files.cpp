#include<bits/stdc++.h>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ofstream Myfile("filexample.txt");
    Myfile <<"Files can be tricky , but it is fun enough!\n";
    Myfile <<"Lets learn about fstream.\n";
    Myfile.close();
    string mytext;
    ifstream Myfileread("filexample.txt");
    if(!Myfileread){
        cout<<"Error opening the file"<<endl;
        return 1;
    }
    while(getline(Myfileread,mytext)){
        cout<<mytext;
    }
    Myfileread.close();
    return 0;
}