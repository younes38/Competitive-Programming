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

ll A[51][51];

int main() {
    FAST
    //open_file write_file


    int n, k;
    int a, b, c;

    while (cin >> a >> b >> c){
        mem(A, 0);
        A[0][0] = 1;
        for(int i = 1; i <= b; i++){
            for(int j = 1; j <= a; j++){
                for(int k = 1; k <= j && k <= c; k++){
                    A[i][j] += A[i - 1][j - k];

                }
            }
        }
        cout << A[b][a] << endl;
    }
    return 0;
}
