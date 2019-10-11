#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int > vi ;
typedef vector<ll> vl ;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define forn(i,n) for(i=0;i<n;i++)
#define d(x)             cout<<#x " = "<<(x)<<endl;
#define FAST              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;
double p;
double dp[505][505];
double pp[505];
double ans;

void doo(){
    ans = 0.0;
    pp[0] = 1.0;
    for(int i = 1; i < 505; i++) pp[i] = pp[i - 1] * p;
    for(int i = 0 ; i<=n; i++){
        for(int j = 0; j <= n; j++){
            if (j >= i) dp[i][j] = 1.0;
            else {
                if (j == i - 1) dp[i][j] = 1 - pp[i];
                else {
                    dp[i][j] = dp[i - 1][j] - dp[i - j - 2][j] * (1 - p) * pp[j + 1];
                }
            }
        }
    }
    for(int j = 1; j <=n; j++){
        ans += (dp[n][j] - dp[n][j - 1]) * j;
    }
}

int main() {
    FAST
    //open_file write_file
    while(cin >> n >> p && n){
        doo();
        cout << setprecision(6) << fixed << ans << endl;
    }
}
