#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define forn(i,n) for(i=0;i<n;i++)

const int mod = 131071;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    string s;
    string q = "";
    bool ok = 0 ;
    int p[10001];
    p[0] = 1;
    for(int i = 1; i< 10001; i++)
        p[i] = p[i-1]*2 % mod ;
    while (cin >> s) {


        for(char c : s) {
            if (c != '#') q+=c ;
            else ok = 1 ;
        }
        if (ok) {
            int r = 0;
            int n= (int)q.size();
            for(int i = n - 1; i >= 0; i--){
                if (q[i] == '1') r= (r+p[n - i - 1])%mod ;
            }
            if (r == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
            q = "";
            ok =false;
        }
    }

    return 0;
}
