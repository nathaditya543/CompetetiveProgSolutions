#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,ctr=0;
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        if(val > h)
            ctr++;
        ctr++;
    }
    cout << ctr;
}