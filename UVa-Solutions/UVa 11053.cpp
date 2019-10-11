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
    //open_file //write_file
    int n, a, b;
    while(cin >> n >> a >> b && n){
        map<int ,int> mp;

        int j = 1, v = 0;
        int ans = -1;
        while (true){
            auto& mpp = mp[v];
            if (mpp > 0){
                ans = j - mpp;
                break;
            }else{
                mpp = j++;
                v = 1LL * (1LL * a * v % n * v+ b) % n;
            }
        }

        cout << n - ans << endl;
    }
}
