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
    int n ;
    while (scanf("%d", &n) == 1){
        int d = ceil((sqrt(1 + 8*n) -1)/2) ;
        int x, y ;
        x = d  - (n - d*(d-1)/2 -1) ;
        y =  d+1-x  ;
        if (!(d&1)) swap(x, y) ;
        printf("TERM %d IS %d/%d\n", n, x, y) ;
    }
    return 0;
}

