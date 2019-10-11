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
    int t;
    string n;
    cin >> t;
    int q = 1;

    while (t--){

        cin >> n;
        int A[3]; mem(A, 0);
        int m = 0;
        for(char c : n){
            A[(c - '0') % 3]++;
            m = (m + c - '0') % 3;
        }
        if (m != 0 && A[m] > 0) A[0]++;
        cout << "Case " << q++ << ": ";
        if(A[0] & 1) cout << "S" << endl ;
        else cout << "T" << endl;
    }
}
