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

    while (cin >> n, n > 0) {


        int x ;
        int next = 1 ;
        vector<int> A ;
        while (n>1) {
            if(next == 1) {
                A.push_back(2) ;
                if (n&1) next = 0 ;
                n = n>>1 ;

            }
            else {
                A.push_back(1) ;
                A.push_back(2) ;
                if(n&1) next = 1 ;
                n = (n+1) >> 1 ;
            }

        }
        int ans =1 ;
        for(int i = A.size()-1; i>=0;i--) if (A[i] == 2) ans = ans*2 ;  else ans-- ;
        cout << ans << endl ;
    }
    return 0;
}
