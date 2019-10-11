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
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)

pair<int, int > B[500000] ;
int main()
{
    //open_file //write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int N = 1000 ;
    int cp = 0 ;
    for(int i = 1; i<=N; i++) {
        for(int j = i; j <= N; j++) {
            if (__gcd(i,j) == 1) {
                B[cp++] = {i,j};
            }
        }
    }
    sort(B, B+cp , [&](pair<int ,int> a, pair<int , int> b){
        return a.first * b.second < b.first * a.second ;
    });

    int t ,n, k;
    while(cin >> n >> k) {

        int nb = 0 ;
        int i=  0 ;
        while (true) {
            if (B[i].second <= n) {
                nb++ ;
                if (nb == k) break ;
            }
            i++ ;
        }

        cout << B[i].first << "/" << B[i].second << endl ;
    }
    return 0;
}
