#include<bits/stdc++.h>
using namespace std;

// string solve(){
//     int n,k; cin >> n >> k;
//     int prev; cin >> prev;

//     int ctr = 1 ;
//     for(int i = 1; i < n; i++){
//         int x;
//         cin >> x;

//         if(x < prev){
//             ctr++;
//             prev = x;
//         }

//         else{
//             if(ctr > k)
//                 return "NO";
//             ctr = 1;
//         }
//     }

//     if(ctr > k)
//         return "NO";

//     return "YES";
// }


string solve(){
    int n, k; cin >> n >> k;
    int x; cin >> x;
    int prev = x;
    int flag = 0;

    for(int i = 1; i < n; i++){
        cin >> x;
        if(x < prev)
            flag++;
    }
    if(k == 1 && n!=1 && flag > 0) 
        return "NO";

    return "YES";
}
int main(){
    int n; cin >> n;

    for(int i = 0 ; i < n; i++){
        cout << solve() << endl;
    }
}