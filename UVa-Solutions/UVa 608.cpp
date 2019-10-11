#include<bits/stdc++.h>
using namespace std;
#define write_file  freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)


int main()
{


    //open_file
    //write_file
    int n, t;
    int q ,i,j ;
    cin >> t ;
    map<int, string> mp {{0, "even" }, {1, "up"}, {-1, "down"}} ;
    while (t--) {
        string a ,b ,r ;
        vector<vector<string>> S(3) ;
        forn(i,3) {
            cin >> a >> b >> r ;
            S[i] = {a, b, r} ;
        }
        int B[12] ;
        bool ok ;
        forn(i,12) {
            forn(j,2) {
                ok = true ;
                mem(B, 0) ;
                B[i] = (j == 1 ? 1 : -1) ;
                int k ;
                forn(k,3) {
                    a = S[k][0];
                    b = S[k][1];
                    r = S[k][2];
                    int sum = 0;
                    int l;
                    forn(l, a.size()) {
                        sum += B[a[l]-'A'] ;
                        sum -= B[b[l]-'A'] ;
                    }

                    if(mp[sum] !=r) {ok = false ; break ;}

                }
                if (ok) break ;
            }
            if (ok) break ;
        }

        int id ; string ans ;
        id= i , ans = (B[i] == -1 ? "light" : "heavy") ;
        cout << (char) ('A'+id) <<  " is the counterfeit coin and it is "<< ans << "." << endl ;
    }

    return 0;
}
