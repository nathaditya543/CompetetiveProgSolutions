#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin >> k >> n >> w;
    int val = k*(w*(w+1))/2 - n;
    if(val < 0)
        cout << 0;
    else
        cout << val;
}