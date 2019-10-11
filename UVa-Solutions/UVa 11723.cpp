#include<bits/stdc++.h>

using namespace std;


#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);

int main()
{
    //open_file write_file
    //ios::sync_with_stdio(false);
    //cin.tie(0) ; cout.tie(0) ;
    int t,b,n,a,m,h,r ;
    int q = 1 ;


    while (cin >> n >> r, n||r) {
            cout << "Case " << q++ << ": " ;
        if (n > r*27) cout <<"impossible\n" ;
        else cout << ((n-1 )/r) << '\n' ;
     }
    return 0;
}
