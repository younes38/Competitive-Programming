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
const int MAXN =32000;
bool p[MAXN] ;
vector<int> pr ;
void sieve(ll n){
    memset(p, true, sizeof p) ;
    p[0] = p[1] = false ;
    for(ll i= 2; i <=n; i++){
        if(p[i]) {
            for(ll j = i*i; j<=n; j+=i) p[j] = false ;
            pr.push_back(i);
        }
    }

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    sieve(MAXN - 1);
    int n;
    int t ;
    scanf("%d", &t);
    while (t--) {
        int a, b ;
        scanf("%d%d", &a, &b);
        int mx  = 0;
        int nb_mx = 0;
        int res;
        for(int i = a; i <= b; i++) {
            res = 1;
            n = i;
            for(int p :pr) {
                if (p > n) break ;
                int cp = 0;
                while (n%p == 0) cp++, n/=p;
                res*= cp+1 ;
            }
            if (n > 1) res *= 2;
            if (res > nb_mx){
                mx = i;
                nb_mx = res ;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, mx, nb_mx);
    }

    return 0;
}
