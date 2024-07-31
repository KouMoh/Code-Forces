#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0; i<n; i++){
            int Petya=0, Vasya=0, Tonya=0;
            cin>>Petya>>Vasya>>Tonya; 
 
            int count = 0;
            
            if(Petya ==1) count++;
            if(Vasya ==1) count++;
            if(Tonya ==1) count++;
 
            if(count >=2) ans++;
    }
    cout<<ans;
    return 0;
}
