#include<iostream>
#include<string>
using namespace std;
int main(){
    /*string greetings,greeting,greet;
    greetings="\nHello c++";
    greeting="Hello Python\n";
    greet=greetings+" "+greeting;
    cout<<greet;
    return 0;*/
    string yes,no;
    yes="nope";
    no="yup";
    cout<<yes.append(no)<<"\n";
    cout<<no.length()<<endl;
    cout<<yes[2]<<"\n";
    cout<<"AT function "<<yes.at(1)<<endl;
    cout<<yes[yes.length()-1]<<endl;
    yes[0]='J';
    yes.at(0)='Z';
    cout<<yes;
    return 0;

}