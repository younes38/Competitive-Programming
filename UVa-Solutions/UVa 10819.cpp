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

const int maxf = 505;
const int inf = 1000000000;
int dp[maxf];


int main() {
    //open_file
    int n, bg;
    while (cin >> bg >> n){
        for(int j = 0; j< maxf; j++)
            dp[j] = inf;
        dp[0] = 0;

        for(int i = 1; i <= n; i++){
            int a, b;
            cin >> a >> b;
            for(int j = maxf - 1; j>= 0; j--){
                if (j + b >= maxf) continue;
                dp[j + b] = min(dp[j + b], dp[j] + a);
            }
        }
        
        int ans;
        for(int i = maxf - 1; i >= 0; i--)
            if (dp[i] <= bg + 200 && dp[i] > 2000) {
                ans = i;
                break;
            }else if (dp[i] <= bg) {
                ans = i;
                break;
            }
        cout << ans << endl;

    }
}
