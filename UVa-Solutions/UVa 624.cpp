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


int choice ;
int A[30];
int mn ;
int m, n;
void ct(int i, int bs, int v) {

    if (v <= m) {
        if (mn < v) mn = v, choice = bs ;
    }
    if (i == n )return ;
    ct (i+1, bs| (1<<i), v+A[i]) ;
    ct (i+1, bs, v) ;


}

int main() {
    //open_file write_file
    while (cin >> m) {
        int i ;
        mn = 0 ;
        cin >> n;

        for(i = 0; i <n ;i++) cin >> A[i];
        ct(0, 0, 0) ;
        i = 0 ;
        int cp = 0 ;
        while (choice) {
            if (choice&1) {
                cout << A[i] << " " ;
                cp+=A[i] ;
            }
            choice >>= 1, i++;
        }
        cout << "sum:" << cp << endl ;
    }


    return 0;
}

