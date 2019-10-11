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
#define D(x)             cout<<#x " = "<<(x)<<endl
#define FAST              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    FAST
    //open_file write_file
    double cow, car, show;
    while (cin >> cow >> car >> show){
        double ans  = cow / (cow + car) * (car / (car + cow - show - 1))
                    + (car / (cow + car)) * ((car - 1) / (car + cow - show - 1));
        cout << setprecision(5) << fixed << ans << endl;
    }

}
