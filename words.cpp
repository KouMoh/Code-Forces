#include<bits/stdc++.h>
using namespace std;

int main() {

    int testcases;

    cin>>testcases;

    for(int i =0; i<testcases; i++){

    string input;

    cin>>input;

    if(input.length()>10)
        cout<<input[0]<<input.length()-2<<input[input.length()-1]<<endl;
    else
    cout<<input<<endl;

    }

    return 0;
}