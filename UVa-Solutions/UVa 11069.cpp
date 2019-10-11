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

long long A[80] ;

int main()
{
    A[0] = 0 ;
    A[1] = 1 ;
    A[2] = 1 ;

    for(int i = 3 ; i< 80; i++) A[i] = A[i-2] + A[i-3] ;


    //open_file write_file
    ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;
    int n;

    while (cin >> n) {
        cout << A[n] + A[n-1] << endl ;
    }


    return 0;
}
