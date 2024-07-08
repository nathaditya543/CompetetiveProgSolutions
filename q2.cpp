#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string pos;
    for(int i = 0 ; i <  n; i++){
        vector<string> ans;
        cin >> pos;
        int num = int(pos[1]) - 48;


        for(int j = 49 ; j  < 57; j++){
            string an = pos.substr(0,1);
            an = an + char(j);
            if(char(j) != pos[1])
                cout << an << endl;
        }

        for(int j = int('a'); j <= int('h'); j++){
            string an = pos.substr(1,1);
            an = char(j) + an;
            if(char(j) != pos[0])
                cout << an << endl;
        }
        
    }
}