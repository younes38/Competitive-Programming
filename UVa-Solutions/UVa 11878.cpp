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
#define D(x)             cout<<#x " = "<<(x)<<endl
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
#define FAST ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;




int main()
{
    //open_file write_file
    FAST
    string s;
    int nb = 0;
    while (cin >> s){
        int n = 0,a = 0, b = 0, c = 0;
        int op;
        int ok = 1;
        for(int i = 0; i< s.size(); i++){
            if (s[i] == '?') {ok = 0; break;}
            if (s[i] == '=') n++;
            else if (s[i] == '+' || s[i] == '-') {
                op = s[i] == '+';
                n++;
            }else {
                if (n == 0) a = a * 10 + s[i] - '0';
                if (n == 1) b = b * 10 + s[i] - '0';
                if (n == 2) c = c * 10 + s[i] - '0';
            }

        }
        if(op){
            if (a + b != c) ok = 0;
        } else if (a - b != c) ok = 0;
        nb += ok;
    }
    cout << nb << endl;
    return 0;
}
