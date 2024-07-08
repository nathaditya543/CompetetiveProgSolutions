#include<bits/stdc++.h>
using namespace std;

bool comp( double a, double b){
    return(a < b);
}

int main(){
    int n;
    cin >> n;
    for(int i =0; i < n; i++){
        int a,b,c,d,p,q;
        double h,c1,c2;
        vector<int> list;
        cin >> p >> q >> a >> b >> c >> d;
        
        if(sqrt(pow(a,2)-pow(b,2)) < sqrt(pow((p-a),2) + pow((q-b),2)))
            list.push_back(sqrt(pow((a-c),2) + pow((b-d),2))/2);
        
        list.push_back(sqrt(pow((p-a),2) + pow((q-b),2)));
        list.push_back(sqrt(pow((p-c),2) + pow((q-d),2)));




    }
}