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

    function<bool(char, char) > win = [&] (char a , char b) {
        if (a == 'P' && b == 'R') return 1 ;
        if (a == 'R' && b == 'S') return 1 ;
        if (a == 'S' && b == 'P') return 1 ;
        return 0 ;
    };
    //open_file
    //write_file
    int n, t;
    int q ,i,j ;
    cin >> t ;
    while (t--) {
        int r, c, n;
        cin>> r>> c >> n ;
        vector<string > A(r) ;
        forn(i,r) cin >> A[i] ;
        while (n--) {
            vector<string> B(r) ;
            forn(i,r) B[i] = A[i] ;

            forn(i,r) forn(j,c) {
                if (i+1 < r) if (win(A[i][j] , A[i+1][j])) B[i+1][j] = A[i][j]; else if (win(A[i+1][j] , A[i][j])) B[i][j] = A[i+1][j];
                if (j+1 < c) if (win(A[i][j] , A[i][j+1])) B[i][j+1] = A[i][j]; else if (win(A[i][j+1] , A[i][j])) B[i][j] = A[i][j+1];
            }
            forn(i,r) A[i] = B[i] ;
        }
        if(r) forn(i,r) cout << A[i] << endl ;
        if(t) cout << endl ;
    }

    return 0;
}
