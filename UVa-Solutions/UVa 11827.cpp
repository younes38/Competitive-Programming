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
#define forn(i,n) for(i=0;i<n;i++)

int main()
{


    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int t ;
    cin >> t; cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        stringstream ss (s) ;
        int x ;
        vector<int> A;
        while (ss >> x) {
            A.push_back(x);
        }
        int n = A.size();
        int mx = 0;
        for(int i = 0 ; i< n; i++) for(int j = i+1 ;j <n;j++) {
            mx = max(mx, __gcd(A[i], A[j])) ;
        }
        cout << mx << endl;
    }


    return 0;
}
