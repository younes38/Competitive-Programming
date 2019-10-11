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

const int MAXN = 100000 ;
bool p[MAXN] ;
vector<int> pr ;
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
    unsigned long long A[21][21] ;
    for(int i = 0; i<=20; i++)
        for(int j = 0; j <= i; j++)
            if (j == 0 || i == j ) A[i][j] = 1 ;
            else A[i][j] = A[i-1][j-1] + A[i-1][j] ;

    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int t ;
    cin >> t;
    int q = 1;
    while (t--) {
        string s ;
        cin >> s;
        int P[26] ;
        mem(P,0) ;
        for(char c : s) P[c - 'A']++ ;
        int n = s.size() ;
        unsigned long long res = 1 ;
        for(int i = 0 ; i < 26; i++) {
            if (P[i] > 0) {
                res *= A[n][P[i]] ;
                n-=P[i] ;
            }
        }
        cout << "Data set " << q++ << ": " << res << endl ;
    }


    return 0;
}
