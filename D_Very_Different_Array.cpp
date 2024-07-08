#include<bits/stdc++.h>
using namespace std;

long long solve(){
    int ap, bp; cin >> ap >> bp;
    vector<long long> a(ap);
    vector<long long> b(bp);

    for(int i = 0; i < ap; i++)
        cin >> a[i];
    
    for(int i = 0; i < bp; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    // cout << endl << endl;
    
    // for(int i = 0; i < ap; i++)
    //     cout << a[i] << " ";
    // cout << endl;
    
    // for(int i = 0; i < bp; i++)
    //     cout << b[i] << " ";
    // cout << endl;

    int bleft = 0, bright = bp-1; 
    int aleft = 0, aright = ap-1;
    long long ans = 0;

    while(aleft <= aright){
        long long ls = abs(a[aright] - b[bleft]);
        long long rs = abs(a[aleft] - b[bright]);

        if(rs > ls){
            ans += rs;
            aleft++;
            bright--;
        }
        else{
            ans += ls;
            aright--;
            bleft++;
        }
    
    }

    return ans;
}


int main(){
    int n; cin >> n;

    for(int i = 0; i < n; i++)
        cout << solve() << endl;
}