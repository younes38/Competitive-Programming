#include<bits/stdc++.h>

using namespace std;
typedef long long ll ;

#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform((sl).begin(), (sl).end(), (sl).begin(), ::tolower);
#define upper(su) transform((su).begin(), (su).end(), (su).begin(), ::toupper);



int main()
{
    //open_file write_file
    //ios::sync_with_stdio(false);
    //cin.tie(0) ; cout.tie(0) ;
    ll n ; ll t ;
    ll q=1, m,k;

    cin >> t ;
    while (t--) {
        cin >> n ;
        ll si = 1 ;
        if (n< 0) n =-n, si = 0;
        ll i = 1 ;
        ll cp = 0 ;
       
        ll x = 1 ;
        ll nb ;
        i = n ;
        while(i > 1) {
            nb =n/x - n/(x+1) ;
            cp+= (x*nb) ;
            i -= nb ;
            x = n/i ;

        }
        cout << (cp+n)*si << endl ;

    }
    return 0;
}
