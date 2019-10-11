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



int main() {
    FAST
    //open_file write_file
	int tt;
	int t, n, m;
	cin >> tt;
	while(tt--){
        cin >> n >> t >> m;
        int side = 0;
        vi ans(m);
        int actual_t = 0;
        vector<pair<int, int>> V;
        for(int i = 0; i < m; i++){
            int time;
            string si;
            cin >> time >> si;
            V.push_back({time , si != "left"});
        }
        int i = 0;
        int save = 0;
        bool visited[m];
        mem(visited, 0);
        while(1){
            bool go = false;
            i = save;
            int ok = 1;
            int cp = 0;
            while (i < m && actual_t >= V[i].first){
                if (V[i].second == side && !visited[i]){
                    ans[i] = actual_t + t;
                    cp++;
                    visited[i] = 1;
                }
                if (visited[save]) save++;
                i++;
                go = true;
                if (cp == n)break;
            }
            if (go){
                side ^= 1;
                actual_t += t;
            }else {
                if (i < m){
                    if (V[i].second == side)
                        actual_t = V[i].first;
                    else {
                        actual_t = V[i].first + t;
                        side ^= 1;
                    }
                }else break;

            }
        }
        for(int a : ans) cout << a << endl;
        if (tt > 0) cout << endl;
	}


	return 0;
}
