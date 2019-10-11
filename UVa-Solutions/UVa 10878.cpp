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
#define D(x)             cout<<#x " = "<<(x)<<endl
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
#define FAST ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;


int main()
{
    //open_file write_file
    FAST
    string s;
    getline(cin, s);
    string ans = "";
    while (getline(cin , s) && s[0] != '_'){
        int p = 1;
        int n = 0;
        for(int i = 9; i >= 2; i--){
            if (i == 6) continue;
            if (s[i] == 'o') n += p;
            p *= 2;
        }
        ans += (char)n;
    }
    cout << ans;

    return 0;
}

