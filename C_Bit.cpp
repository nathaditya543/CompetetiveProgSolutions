#include<bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cin >> p;
    int ans = 0;
    for(int i = 0; i < p; i++){
        string x;
        cin >> x;
        if(x.compare("X++") == 0 || x.compare("++X") == 0)
            ans++;
        if(x.compare("X--") == 0 || x.compare("--X") == 0)
            ans--;
    }

    cout << ans;
}