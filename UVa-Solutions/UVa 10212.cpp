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

const int MAXN =20000002;
int p[MAXN] ;
void sieve(ll n){
    memset(p, 0, sizeof p) ;
    p[0] = p[1] = 1 ;
    for(ll i= 2; i <=n; i++){
        if(p[i] == 0) {
            for(ll j = i; j<=n; j+=i) if (p[j] == 0) p[j] = i;
        }
    }

}

int p2[MAXN];
int prod[MAXN];
int pow2(int i){
    if (i == 0) return 1;
    i = (i - 1)%4;
    int R[] = {2,4,8,6};
    return R[i];
}
int main(){
    sieve(MAXN - 1);

    mem(p2, 0);
    mem(prod, 0);
    int I[] = {0,1,0,7,0,0,0,3,0,9};
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    int res = 1;
    p2[0] = p2[1] = 0;
    prod[0] = prod[1] = 1;
    for(int i = 2 ; i < MAXN; i++) {
        p2[i] = p2[i - 1];
        int j = i;
        while (j%5 == 0) j/=5, p2[i]--;
        while (j != 1){
            if (p[j] == 2) p2[i]++;
            else res = (res * p[j]) % 10;
            j /= p[j];
        }
        prod[i] = res;
    }


    int n, m;
    while (cin >> n >> m){
        int puiss = p2[n] - p2[n - m];
        int r = prod[n] * I[prod[n - m]] * (puiss >= 0 ? pow2(puiss) : 5 ) % 10;
        cout << r << endl;
    }
    return 0;
}
