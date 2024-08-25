#include<iostream>
#include<string>
using namespace std;
int main(){
    bool ships[4][4]={
        {0,1,0,1},
        {1,0,0,0},
        {0,0,0,1},
        {0,0,0,0}
    };
    int hits=0;
    int no_of_turns=0;
    while(hits<4){
        int row,column;
        cout<<"selecting coordinates to find the battleship;"<<endl;
        do{
            cout<<"Choose a row number between 0 to 3: "<<endl;
            cin>>row;
            if (row<0||row>3){
                cout<<"Kindly enter row between 0 to 3 ";
            }
        } while(row<0||row>3);
        do{
            cout<<"Choose a coloumns between 0 to 3: "<<endl;
            cin>>column;
            if(column<0||column>3){ 
                cout<<"Kindly enter columns between 0 to 3 ";
            }
        }while(column<0||column>3);
        if(ships[row][column]){
            ships[row][column]=0;
            hits++;
            cout<<"Hit!!"<<(4 - hits)<<"left.\n\n";
        }
        else{
            cout<<"You Missed!!"<<endl;
        }
        no_of_turns++;
    }
    cout<<"Victory!\n";
    cout<<"You win in "<<no_of_turns<<"turns"<<endl;
    return 0;

}