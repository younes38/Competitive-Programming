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
#define FAST              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int n;

int main() {
    FAST
    //open_file write_file
    int n;
    while(cin >> n && n){
        set<int> S;
        int ans = 0;
        while (true){
            if (S.count(n) > 0) break;
            else {
                S.insert(n);
                ans++;
                n = (n * n) / 100 % 10000;
            }
        }

        cout << ans << endl;
    }
}
