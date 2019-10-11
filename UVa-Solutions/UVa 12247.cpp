#include<bits/stdc++.h>
using namespace std;
#define write_file  freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)

int main()
{
  //  open_file
    //write_file
    vector<int> a(3) , c(3) ;
    while (cin>> a[0] >> a[1] >> a[2] >> c[0] >> c[1] , a[0] ) {
        bool ok = false ;
        int i ;
        for ( i = 1 ; i <= 52 ; i++) {
            vector<int> b(3) ;
            b[0] = c[0] ; b[1] = c[1] ;
            if (i!=a[0] &&i!=a[1] &&i!=a[2] &&i!=b[0] &&i!=b[1]) {
                b[2] = i ;
                sort (all (a)) ; sort(all(b)) ;
                if ( !( (a[2] > b[1] || a[2] > b[2] ) && a[1] > b[0] ) ) {ok= true ; break ;}
            }
        }
        cout << (ok ? i  : -1)<< endl ;
     }

    return 0;
}
