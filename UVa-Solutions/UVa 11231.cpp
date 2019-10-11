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

    // open_file write_file
    //ios::sync_with_stdio(false);
    //cin.tie(0) ; cout.tie(0) ;
    int n ; int t ;
    int q=1, m,k;
    int c ;
    while (cin >> n >> m >> c, n > 0){
        int tot = (n-7)*(m-7) ;

        cout <<  tot/2 + c* (tot%2)  << endl ;
        //else cout << ()
    }
    return 0;
}
 