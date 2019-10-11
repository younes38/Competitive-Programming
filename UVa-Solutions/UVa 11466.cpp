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

const int MAXN = 10000005;
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
int main()
{
    sieve(MAXN - 1);

    //open_file write_file
    ll n;

    while (cin >> n, n) {
        n = abs(n);
        int nb_p = 0;
        ll mx = 0;
        for(ll i : pr) {
            if(i > n) break ;
            if (n%i == 0) {
                nb_p++;
                while (n%i == 0)n/=i;
                mx = i;
            }
        }
        if (n > 1) mx = n, nb_p++;
        cout << (nb_p >1? mx : -1) << endl;

    }


    return 0;
}
