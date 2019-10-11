#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;

#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
ll lcm (ll a , ll b) {return a*b/__gcd(a,b) ;}
// read a line of int
void read ( vi &a) {
    string s ;
    getline(cin , s) ;
        stringstream ss(s) ;
        int x ;
        while (ss>> x) {
            a.push_back(x) ;
        }
}

int main()

{
    //open_file write_file
    int i,j,k,n,l,t ;


    cin >> t ;
    cin.ignore() ;
    cin.ignore() ;
    string s;
    while(t--) {
        map<string, int > mp ;
        int tot=0 ;
        while (getline(cin, s) , s!="") {
            mp[s]++;
            tot++ ;
        }
        for(auto it=mp.begin() ; it!=mp.end() ; it++) {
            cout << it->first << " " << setprecision(4) << fixed <<(double) it->second*100/tot << endl ;
        }
    if(t) cout << endl ;

    }
    //cerr << clock() / (CLOCKS_PER_SEC + 0.0L) << endl;
    return 0;
}
