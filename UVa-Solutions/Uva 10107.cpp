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


    /*open_file
    write_file*/
    int q ,i,j ,B;
    int sz,p ;

    string s ;
    vector<int> A ;
    bool ok = 1;
    i = 0 ;
    while(cin>> q) {
        i++;
        auto p = upper_bound(all(A), q) ;
        A.insert( p , q)  ;
        if(ok) printf("%d\n" , A[i/2]) ;
        else printf("%d\n", (A[i/2]+A[i/2-1])/2 ) ;
        ok=!ok ;
    }


    return 0;
}
