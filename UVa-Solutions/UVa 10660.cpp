#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define all(a) a.begin(), a.end()
#define open_file freopen("input.txt", "r", stdin);
#define write_file freopen("output.txt", "w", stdout);
#define mem(A, v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i, n) for (i = 0; i < n; i++)
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
ll lcm(ll a, ll b) { return a * b / __gcd(a, b); }


int miin (int a, int b, int c, int d, int e) {
    return min (a, min (b, min (c, min (d,e)))) ;
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0) ; cout.tie(0) ;
    // open_file  write_file
    int n, t, i, j, k, m, ta, tb, a, b, c, p;

    cin>> t ;
    while (t--) {
        cin >> n ;
        int A[5][5]; mem(A,0) ;
        int x, y, v;
        forn(i,n) {
            cin >> x >> y>> v ;
            A[x][y] = v ;
        }
        int pre[5][5];
        mem(pre, 0) ;
        for (i =0; i <5;i++)
            for (j=0; j < 5;j++)
                for (int a =0; a <5; a++)
                    for (int b =0; b <5;b++)
                        pre[i][j] += (abs (i-a) + abs(j-b)) * A[a][b] ;

        int aa, bb, cc, dd, ee ;
        int mn = 9999999 ;
        for(int a =0; a < 21; a++)
            for (int b = a+1; b<22; b++)
                for (int c = b+1; c <23; c++)
                    for (int d = c+1; d < 24; d++)
                        for (int e = d+1; e < 25; e++) {
                            int v = 0;
                            for (i = 0; i < 5; i++)
                                for (j = 0; j < 5; j++) {
                                    v =v + A[i][j]*miin (abs (a/5 - i) + abs(a%5 - j),
                                                        abs (b/5 - i) + abs(b%5 - j),
                                                        abs (c/5 - i) + abs(c%5 - j),
                                                        abs (d/5 - i) + abs(d%5 - j),
                                                        abs (e/5 - i) + abs(e%5 - j));
                                }
                            if (mn > v){
                                mn = v ;
                                aa = a, bb= b, cc =c , dd= d, ee =e ;
                            }
                        }

        cout << aa << " " << bb << " " << cc << " " << dd << " " << ee << endl ;

    }


    return 0;
}

