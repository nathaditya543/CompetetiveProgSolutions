#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> a;
        int min = a;
        cin >> b;
        if(min > b)
            min = b;
        cin >> c;
        if(min > c)
            min = c;

        if(a%min == 0 && b%min == 0 && c%min == 0){
            int sum = (a/min - 1) + (b/min - 1) + (c/min - 1);
            if(sum > 3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;

    }

}