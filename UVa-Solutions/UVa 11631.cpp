 #include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;
typedef pair<int, int> ii;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define D(x)             cout<<#x " = "<<(x)<<endl
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
#define FAST ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
const int maxn = 200001;
int n, m;
bool ok[maxn];
vector<vector<pair<int, int>>> adj;
priority_queue<pair<int, int>, vector<ii>, greater<ii>> pq;
void dfs(int u){
    ok[u] = 1;
    for(auto p : adj[u])
        if (!ok[p.second])
            pq.push(p);
}


int main()
{
    //open_file write_file
    FAST

    while (cin >> n >> m  && n){
        int tot = 0;
        fill(ok, ok + n, 0);
        adj.assign(n, vector<ii>());
        for(int i = 0; i < m; i++){
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].push_back({c, b});
            adj[b].push_back({c, a});
            tot += c;
        }

        dfs(0);
        int d = 0;
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            if (!ok[p.second]) {
                d += p.first;
                dfs(p.second);
            }
        }
        cout << tot - d << endl;
    }


    return 0;
}
