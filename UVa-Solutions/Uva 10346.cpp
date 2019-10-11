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


void doo(vector<int > &A, int n) {
    while (n) {
        A[n%10]++ ;
        n /=10 ;
    }
}

int main()
{
    //open_file write_file
    //ios::sync_with_stdio(false);
    //cin.tie(0) ; cout.tie(0) ;
    int t,b,n,a,m,h,r,k ;
    int q = 1 ;
    while (cin >> n >>k) {
        int nb=n ;
        int r =n ;
        while (n) {
            n = r/k;
            nb+= n ;
            r = n + r%k ;

        }
        cout << nb << "\n" ;
    }
    return 0;
}
