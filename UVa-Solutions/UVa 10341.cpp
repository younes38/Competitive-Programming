#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int > vi ;
typedef vector<ll> vl ;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define forn(i,n) for(i=0;i<n;i++)
#define d(x)             cout<<#x " = "<<(x)<<endl;
#define FAST             ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0);
double p, q, r, s, t, u;
const double eps = 0.00000001;
double f(double x){
    return p * exp(-1 * x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
int main() {
    FAST
    //open_file write_file


    int n;
    while (cin >> p >> q >> r >> s >> t >> u){
        double l = 0.0;
        double h = 1.0;
        bool ok = 0;
        double mid;
        for(int i = 0; i < 50; i++){
            mid = (l + h) / 2;
            double F = f(mid);
            //cout << mid << " "<< F << endl;
            if (fabs(F) < 0.00001) {
                ok = 1;

            }
            if (F > 0) l = mid;
            else h = mid;
        }
        if(ok) cout << setprecision(4) << fixed << mid << endl;
        else cout << "No solution\n";
    }
    return 0;
}
