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
const int MAXN =1000009;
int p[MAXN] ;
void sieve(ll n){
    memset(p, 0, sizeof p) ;
    p[0] = p[1] = 1 ;
    for(ll i= 2; i <=n; i++){
        if(p[i] == 0) {
            for(ll j = i; j<=n; j+=i) if (p[j] != -1) p[j]++ ;
            for(ll j = i*i; j<=n; j+=i*i) p[j] = -1;
        }
    }

}
int M[MAXN] ;
int main()
{
   // ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    sieve(MAXN -1);

    M[1] = p[1] ;
    for(int i = 2; i < MAXN; i++) {
        if (p[i] == -1) M[i] = M[i-1];
        else if (p[i]&1) M[i] = M[i-1] - 1;
        else M[i] = M[i-1] + 1;
    }
    int n;
    while (scanf("%d", &n) && n) {
        printf("%8d%8d%8d\n", n, (p[n] == -1 ? 0 : p[n]&1 && n!=1  ? -1 : 1) , M[n]);
    }

    return 0;
}
