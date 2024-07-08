#include<bits/stdc++.h>
using namespace std;

string solve(){
    string p,h;
    cin >> p >> h;
    if(p.size() > h.size())
        return "NO";

    sort(p.begin(), p.end());
    for(int i = 0; i <= h.size() - p.size(); i++){
        string str = h.substr(i,p.size());
        sort(str.begin(), str.end());
        if(p.compare(str) == 0)
            return "YES";
    }
    return "NO";
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << solve() << endl;
    }
}