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

const int MAXN = 1<<16;
bool p[MAXN] ;
vector<ll> pr ;
void sieve(ll n){
    mem(p, true);
    p[0] = 0;
    p[1] = 0;
    for(ll i= 2; i <=n; i++){
        if(p[i]) {
            for(ll j = i*i; j<=n; j+=i) p[j] = 0 ;
            pr.push_back(i) ;
        }
    }

}

bool div(ll k, int p, int nb){
    int res = 0 ;
    while(k){
        res += k/p;
        k =k /p;
    }
    return res >= nb;

}

int main()
{
    sieve(MAXN - 1);
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    int n, k;
    while (cin >> k) {
        cin >> n;
        int x = n;
        bool ok = 1;
        for(int p:pr) {
            if (p > n) break ;
            int cp = 0 ;
            while (n%p == 0) n/=p, cp++;
            if (cp && !div(k, p, cp)) ok = false;
        }
        if ( n > 1 ){
            if (ok) ok = div(k, n, 1);
        }
        if (ok) cout << x <<" divides "<< k <<"!\n";
        else cout << x <<" does not divide "<< k <<"!\n";
    }



    return 0;
}
