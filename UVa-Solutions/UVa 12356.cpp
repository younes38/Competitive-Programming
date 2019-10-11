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


   /* open_file
    write_file*/
    int n, t;
    int q ,i,j ,s,B;
    bitset<100002   > bs ;
    while (cin>> s >> B , s||B) {
        bs.reset() ;
        int A[s] ;
        forn(i,s) A[i] =i ;


        while (B--) {
            int l,r ;
            cin >> l >> r ;l--; r-- ;
            bs[l] = 1, bs[r] = 1 ;
            A[l] = r ;
            A[r] = l ;
            int ll =l ;
            l-- ;
            if(l>=0) if(A[l]!=l || bs[l]) l = A[l] ; else l++ ;
            r++ ;
            if (r<s) if (A[r]!=r || bs[r]) r = A[r] ; else r-- ;
            if( l>=0)A[l] = r ;
            if( r <s )A[r] = l ;
            l--; r++ ;



            cout << (l<0 ? "*" : to_string(l+1)) << ' ' << (r >=s ? "*" : to_string(r+1)) << endl ;
        }
        cout << "-"<<endl ;
    }

    return 0;
}
