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

int main() {
    FAST
    //open_file write_file


    int n, m;
    while (cin >> n && n){
        vi ans;
        for(int i = 0; i< n; i++){
            int v;
            cin >> v;
            if (v > 0) ans.push_back(v);
        }
        if (ans.size()){
            for(int i = 0; i < ans.size(); i++){
                if (i > 0) cout << ' ';
                cout << ans[i];
            }
        }else cout << 0;
        cout << endl;

    }

    return 0;
}
