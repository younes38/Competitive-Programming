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
const int MAXN =1000002;
bool p[MAXN] ;
vector<int> pr[MAXN] ;
void sieve(ll n){
    memset(p, true, sizeof p) ;
    p[0] = p[1] = false ;
    for(ll i= 2; i <=n; i++){
        if(p[i]) {
            for(ll j = i*i; j<=n; j+=i) p[j] = false ;
            for(ll j = i; j <=n; j *=i) pr[j].push_back(i);
        }
    }

}

int ans[MAXN] ;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    sieve(MAXN - 1);
    ans[0] = ans[1] = 1;
    int res = 1;
    int p2 = 0;
    int pw[30] ;
    pw[0] = 1 ;
    for(int i =1; i< 30; i++) pw[i]= 2*pw[i-1] % 10;
    for(int i = 2; i < MAXN; i++){
        for(int p : pr[i]) {
            if (p == 2) p2++;
            else if (p == 5) p2--;
            else res = (res * p) % 10 ;
        }
        ans[i] = res * pw[p2] % 10 ;

    }
    int n;
    while(cin >> n && n){
        cout << ans[n] << endl ;
    }


    return 0;
}
