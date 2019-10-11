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

int main()
{
    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int n ;
    int q = 1 ;

    while (cin >> n, n) {
        cout << "Case " << q++ <<": " << n/2  << endl ;
    }


    return 0;
}
