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
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)



int main()
{
    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int q = 1 ;
    int t,n ;
    cin >> t ;
    while (t--) { cout << "Case " << q++ << ": " ;
        cin >> n ;
        int A[n][101] ;
        mem(A,0) ;
        for(int i =0 ;i <n; i++) {
            for(int j = 0 ; j< n; j++) {
                int x ;
                cin >> x ;
                A[i][x]++ ;
            }
        }

        bool ok = true ;
        for(int j = 0 ; j <= 100; j++){
            int s = 0 ;
            for(int i = 0 ; i < n; i++) {
                s+=A[i][j] ;
            }
            if (s > n) ok= false ;

        }
        cout << (ok ? "yes" : "no") << endl ;
    }

    return 0;
}
