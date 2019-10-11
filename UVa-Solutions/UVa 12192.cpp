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

int main() {
    //FAST
    //open_file write_file


    int n, m;
    while (cin >> n >> m && n){
        vector<vector<int>> A(n, vi(m, 0));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> A[i][j];
        vector<vector<int>> diag(n + m);
        int i = 0, j = 0;
        int cp = 0;
        while (i < n || j < m){
            if (i < n){
                int a = 0, b = 0;
                while(i + a < n && b < m){
                    diag[cp].push_back(A[i + a][b]);
                    a++;
                    b++;
                }
                cp++;

            }
            if (j < m){
                int a = 0, b = 0;
                while (a < n && j + b < m){
                    diag[cp].push_back(A[a][j + b]);
                    a++;
                    b++;
                }
                cp++;

            }
            i++;
            j++;
        }
        int q;
        cin >> q;
        while (q--){
            int ans = 0;
            int l, r;
            cin >> l >> r;
            for(int i = 0; i < cp ; i++){
                auto &B = diag[i];
                int a = lower_bound(all(B), l) - B.begin();
                int b = upper_bound(all(B), r) - B.begin();
                ans = max(ans, b - a);
            }
            cout << ans << endl;
        }
        cout << '-' << endl;

    }

    return 0;
}
