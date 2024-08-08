#include<iostream>
using namespace std;

int main(){
    int input, col,row;

    for(int i=1;i<=5;i++){
        for(int j=1; j<=5; j++){
            cin>>input;
            if(input ==1){
            col = i;
            row = j;
            }
        }
    }

    cout<< abs(col-3) + abs(row -3);
    return 0;
}