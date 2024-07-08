#include<bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin >> str;
    int st = 0;  
    int en = str.size()-1; 
    
    string s1;
    string s2;
    string s3;
    
    while(en-st > 0){
        s1 = str.substr(0,st+1);
        s2 = str.substr(st,en-st+1);
        s3 = str.substr(en);
    
        int c1 = s2.compare(s1);
        int c3 = s2.compare(s3);

        if(c1 == c3){
            cout << s1 << " " << s2 << " " << s3 << endl;   
            return;
        }

        s1 = str.substr(0,st+2);
        s2 = str.substr(st,en-st+2);
        s3 = str.substr(en);

        c1 = s2.compare(s1);
        c3 = s2.compare(s3);

        if(c1 == c3){
            cout << s1 << " " << s2 << " " << s3 << endl;   
            return;
        }

        s1 = str.substr(0,st);
        s2 = str.substr(st,en - 1 -st);
        s3 = str.substr(en - 1);

        c1 = s2.compare(s1);
        c3 = s2.compare(s3);

        if(c1 == c3){
            cout << s1 << " " << s2 << " " << s3 << endl;   
            return;
        }
        st++;
        en--;
    }

    cout << ": (" << endl;

}


int main(){
    int n;
    cin >> n;
    for(int _ = 0; _ < n; _++)
        solve();
}