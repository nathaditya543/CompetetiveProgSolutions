#include<bits/stdc++.h>
using namespace std;

int main(){
    int val;
    cin >> val;

    int n;
    cin >> n;

    while(n > 0){
        if(val%10 == 0)
            val = val/10;
        else
            val -= 1;
        n--;
    }
        cout << val << endl;
}