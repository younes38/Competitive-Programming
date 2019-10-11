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


int main()
{
   //open_file //write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int t ;
    int n ;
    string s ;
    while (getline(cin ,s)) {
        vi A ;
        stringstream ss(s) ;
        int x ;
        while(ss >> x) {
            A.push_back(x) ;
        }
        vi V ;
        getline(cin , s) ;
        stringstream sss(s) ;
        while (sss >> x) V.push_back(x) ;
        for(int i= 0 ; i< V.size(); i++) {
            int x = V[i] ;
            int p = 1 ;
            int r = 0 ;
            for(int j = A.size() -1 ; j >=0; j--) {
                r += A[j] * p ;
                p*=x ;
            }
            cout << r ;
            if (i < V.size()-1) cout << " " ;
        }
        cout << endl ;

    }



    return 0;
}
