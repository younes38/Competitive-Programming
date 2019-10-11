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

int p[10100] ;
vector<int> pr ;

void sieve(ll n){
    memset(p, true, sizeof p) ;
    p[0] = p[1] = false ;
    for(ll i= 2; i <=n; i++){
        if(p[i]) {
            for(ll j = i*i; j<=n; j+=i) p[j] = false ;
            pr.push_back(i) ;
        }
    }

}


int main()
{
    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    sieve(10099) ;
    int s = pr.size() ;
    int n ;
    while(cin >> n, n) {
        int i = 0, j = 0 ;
        int sum = pr[i];
        int cp = 0 ;

        while ( i< s && j < s && pr[i] <= n && pr[j] <= n) {
               // cout << i << " " << j<< endl ;
            if (sum == n) cp++,sum-=pr[i++], sum+=pr[++j] ;
            else {
                if (sum < n) {
                    sum+=pr[++j] ;
                }else sum-=pr[i++] ;
            }

        }
        cout << cp << endl ;
    }

    return 0;
}
