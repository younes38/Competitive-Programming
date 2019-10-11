#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;

#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
ll lcm (ll a , ll b) {return a*b/__gcd(a,b) ;}

#define N  8
int P[100][8] ;
int row[N] , cp;
bool can (int r , int c) {
    for (int i = 0 ; i < c ; i++) {
        if (row[i]== r || abs(row[i] - r) == abs(i - c)) return false;
    }
    return true ;
}


void backtrack(int c) {

    if (c == N) {for (int i =0; i< N; i++) P[cp][i] = row[i]+1; cp++ ; }
    else {
        for (int i = 0 ; i < N ; i++){
            if (can(i,c)) {
                row[c] = i ;
                backtrack(c+1) ;
            }
        }
    }
}




int main() {
    //open_file write_file
    cp = 0 ;
    backtrack(0) ;
    int A[8] ;
    int q = 0 ;
    while (cin >> A[0]) {
        int i ;
        forn(i,N-1) cin >> A[i+1] ;
        int mn = 99999 ;
        for (int i = 0; i < cp; i++) {
            int s = 0 ;
            for (int k = 0; k< N; k++) s += abs(A[k] - P[i][k]) > 0 ;
            mn = min (s , mn) ;
        }
        cout << "Case " << ++q << ": "<< mn << endl ;
    }
    return 0;
}

