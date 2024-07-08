#include<bits/stdc++.h>
using namespace std;

double solve(){
    int px,py; cin >> px >> py;
    int ax,ay; cin >> ax >> ay;
    int bx,by; cin >> bx >> by;

    double ob = sqrt(by*by + bx*bx);
    double oa = sqrt(ay*ay + ax*ax);
    double pa = sqrt(pow(ay-py,2) + pow(ax-px,2));
    double pb = sqrt(pow(by-py,2) + pow(bx-px,2));
    double d = (sqrt(pow(by-ay,2) + pow(bx-ax,2)))/2;

    double min = 1.0;
    double max = pow(10,9);

    while((max - min) > 1e-8){
        double mid = min + (max - min)/2;
        bool ans = false;
        if(mid >= oa && mid >= pa)
            ans = true;
        else if(mid >= ob && mid >= pb)
            ans = true;
        else if(mid >= d && (mid >= ob || mid >= oa) && (mid >=pb || mid >= pa))
            ans = true;
        
        if(ans)
            max = mid;
        else
            min = mid;
    }

    return min;

}

int main(){
    int n; cin >> n;
    while(n--)
        cout << setprecision(15) << solve() << endl;
}