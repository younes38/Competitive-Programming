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
#define FAST             ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0);

const int inf = 1<<30;

int dist(pair<int, int> a, pair<int, int> b){
    return  (int) abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
    FAST
    //open_file write_file
    int a, b, n, m;
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        int x, y;
        cin >> x >> y;
        int k;
        cin >> k;
        set<pair<int, int>> S;

        S.insert({x, y});
        for(int i = 0; i < k; i++){
            cin >> a >> b;
            S.insert({a, b});
        }
        vector<pair<int,int>> P;
        k = S.size();
        for(auto e :S){
            P.push_back(e);
        }
        vector<vector<int>> A(k, vi(k, 0));
        for(int i = 0; i <k ;i++){
            for(int j = 0; j <k; j++){
                if (i == j) A[i][j] = 0;
                else A[i][j] = dist(P[i], P[j]);
            }
        }

        function<int(int ,int, int)> fin = [&](int i, int v, int val){
            if (v == ((1<<k) - 1))
                return val + A[0][i];

            int miin = inf;
            for(int j = 0; j < k; j++){
                if (!(v&(1<<j))) {
                    int d = fin(j, v|(1<<j), A[i][j] + val);
                    miin = min(d, miin);
                }
            }
            return miin;
        };
        int ans = fin(0,1,0);
        cout << "The shortest path has length " << ans << endl;



    }

    return 0;
}
