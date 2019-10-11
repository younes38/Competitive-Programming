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
const int maxn = 111;
int r, c, m, n;
int a[maxn][maxn];
bool ok(int x, int y){
    return (a[x][y] != -1 && x >=0 && x < r && y>= 0 && y < c);
}


int main()
{
    //open_file write_file
    FAST

    int t;
    int qq = 1;
    cin >> t;
    while (t--){
        mem(a, 0);
        cin >> r >> c >> m >> n;
        int X[] = {-m, -m, -n, -n, m, m, n, n};
        int Y[] = {n, -n, m, -m, n, -n, m, -m};
        int q;
        cin >> q;
        while(q--){
            int x, y;
            cin >> x >> y;
            a[x][y] = -1;
        }
        queue<ii> Q;
        Q.push(ii(0, 0));
        while(!Q.empty()){
            auto p = Q.front();
            Q.pop();
            for(int i = 0; i < 8; i++){
                int x = p.first + X[i];
                int y = p.second + Y[i];
                if (ok(x, y)){
                    if(!a[x][y]){
                        Q.push(ii(x, y));
                    }
                    a[x][y] = 1;
                }
            }
        }
        int aa = 0, b = 0;
        for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++){
            if (a[i][j] > 0 || (i == 0 && j == 0)){
                set<ii> s;
                for(int k = 0; k< 8; k++){
                    int x = i + X[k];
                    int y = j + Y[k];

                    if (ok(x, y)) s.insert(ii(x, y));

                }
                int  cp = s.size();
                if (cp&1) b++; else aa++;
            }
        }
        cout << "Case " << qq++ << ": " << aa << ' ' << b << endl;

    }




    return 0;
}
