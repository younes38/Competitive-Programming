#include<bits/stdc++.h>

using namespace std;


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
    int n ;
    while(cin >> n ,n!=-1 ) {
        n =n*2 ;
        int rmax = 0 ;
        for(int  i= 1; i*i<=n;i++) {
            if (n%i == 0 ) {
                int r  = i ;
                int b = n/r -r-1 ;
                if (b>=0 && b%2 == 0) rmax = max(rmax, r) ;
                r = n/i ;
                b = n/r -r-1 ;
                if (b>=0 && b%2 == 0) rmax = max(rmax, r) ;
            }
        }
        int a = n/rmax-rmax-1 ;
        a =a /2 ;
        printf("%d = %d + ... + %d\n", n/2 , a+1, a+rmax) ;
    }



    return 0;
}
