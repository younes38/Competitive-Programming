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
const int mod = 1000000;

int ct(int n){
    if (n < 0) return 0;
    if (n == 0)return 1;
    int s = 0;
    for(int i = 0; i <= n; i++){
        s += ct(n - i);
        s %= mod;
    }
    return s;
}

int A[101][101];

int main() {
    FAST
    //open_file //write_file
    mem(A, 0);
    A[0][0] = 1;
    for(int i = 1; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= j; k++){
                A[i][j] += A[i - 1][j - k];
                A[i][j] %= mod;
            }
        }
    }
    int n, k;

    while (cin >> n >> k && (n || k)){
        cout << A[k][n] << endl;
    }
    return 0;
}
