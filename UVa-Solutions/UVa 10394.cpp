#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define forn(i,n) for(i=0;i<n;i++)

const int MAXN = 20000009 ;

int p[MAXN] ;
int pr[100099] ;
int cp;
void sieve(ll n){
    memset(p, true, sizeof p) ;
    p[0] = p[1] = false ;
    for(ll i= 2; i <=n; i++){
        if(p[i]) {
            for(ll j = i*i; j<=n; j+=i) p[j] = false ;
            if (i != 2 && p[i+2]) pr[cp++] = i ;
            if (cp == 100095) return ;
        }
    }

}


int main()
{
    //open_file write_file
    //ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    cp = 0 ;
    sieve(MAXN -5);
    int n;
    cerr<<"ok" << endl ;
    while (scanf("%d", &n) == 1) {
            cerr<<"ok" << endl ;
        printf("(%d, %d)\n", pr[n -1] , pr[n-1] +2 ) ;
    }


    return 0;
}
