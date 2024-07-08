#include<bits/stdc++.h>
using namespace std;


long long modbinpow(int a, int b, int mod){
    long long res = 1;
    while(b != 0){
        if(b%2 == 1)
            res = (a * res * 1LL) % mod;
        b = b/2;
        a = a*a%mod;
    }

    return res;
}

int get_rep(int a, vector<int> &dsu_list){
    if(dsu_list[a] == a || dsu_list[a] == -1)
        return dsu_list[a];
    return dsu_list[a] = get_rep(dsu_list[a], dsu_list);
}

void merge_sets(int a, int b, vector<int>& dsu_list, vector<int>& size){
    a = get_rep(a, dsu_list);
    b = get_rep(b, dsu_list);
    if(size[a] > size[b]){
        dsu_list[b] = a;
        size[a]++;
    }
    else{
        dsu_list[a] = b;
        b++; 
    }

}


void solve(){
    int n; cin >> n;
    vector<int> va(n);
    vector<int> vb(n);
    vector<int> vc(n);
    vector<int> dsu_list(n);
    vector<int> size(n,0);

    for(int i = 0; i < n; i++)
        dsu_list[i] = i;
    for(int i = 0; i < n; i++)
        cin >> va[i];
    for(int i = 0; i < n; i++)
        cin >> vb[i];
    for(int i = 0; i < n; i++)
        cin >> vc[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(va[i] == vb[j] || vb[i] == va[j])
                merge_sets(i,j,dsu_list, size);
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        get_rep(i, dsu_list);
        if(vc[i] != 0)
            dsu_list[get_rep(i, dsu_list)] = -1;
        if(va[i] == vb[i])
            dsu_list[i] = -1;
    }

    for(int i = 0; i < n; i++){
        if(i == dsu_list[i])
                ans++;
    }

    cout << modbinpow(2, ans, 1e9 + 7) << endl;
}


int main(){
    int t; cin >> t;
    while(t--)
    solve();
}
