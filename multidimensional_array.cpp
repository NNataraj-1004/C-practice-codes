#include<iostream>
#include<string>
using namespace std;
int main(){
    string Multi_2_array[2][3][4]{
        {
            {"A1", "A2","A3","A4"},
            {"A5", "A6", "A7", "A8"},
            {"A9","A10","A11","A12"}
        },
        {
            {"A13", "A14","A15","A16"},
            {"A17", "A18", "A19", "A20"},
            {"A21","A22","A23","A24"}
        }
    };
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                cout<<"Letters["<<i<<"]["<<j<<"]["<<k<<"]="<<Multi_2_array[i][j][k]<<endl;
            }
        }
    }
    return 0;
}