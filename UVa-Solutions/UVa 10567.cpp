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


const int inf = 1000000;
int main() {
    FAST
    //open_file write_file
    map<char, int> mp;
    int cp = 0;
    for(int i = 0; i < 26; i++) mp[i + 'a'] = cp++;
    for(int i = 0; i < 26; i++) mp[i + 'A'] = cp++;
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> A(52);
    for(int i = 0; i < n; i++){
        A[mp[s[i]]].push_back(i);
    }
    int q;
    cin >> q;
    while(q--){
        string a;
        cin >> a;
        bool ok = 1;
        int mn = 10000000, mx = -1;
        bool fi = 1;

        int p = -1;
        vector<int> ans(52, 0);
        for(char c : a){
            int i = mp[c];
            int pos = upper_bound(all(A[i]), p) - A[i].begin();

            if (pos < (int)A[i].size()){
                p = A[i][pos];
                mn = min(mn, p);
            }else{
                ok = false;
                break;
            }
            mx = p;
        }
        if (ok) cout << "Matched " << mn << " " << mx << endl;
        else cout << "Not matched\n";

    }




    return 0;
}
