#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
}