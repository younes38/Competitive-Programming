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
    int n;
    int q = 0;

    while (cin >> n && n){

        bool stop = false;
        int A[n];
        while (!stop){
            for(int i = 0; i< n; i++){
                int v;
                cin >> v ;
                if (v == 0) {
                    stop = 1;
                    break ;
                }
                A[i] = v;
            }
            if (!stop){
                stack<int> S;
                int i = 0;
                int j = 1;

                while (1){
                    while (!S.empty() && S.top() == A[i]){
                        S.pop();
                        i++;
                    }
                    //d(j);
                    if (j > n) break;
                    while (j <= n && (S.empty() || A[i] != S.top())) {
                        //cout << "j = " << j << "S top "<< S.top() << endl ;
                        S.push(j++);
                    }
                }
                cout << (S.empty() ? "Yes" : "No") << endl;

            }
        }
        cout << endl;
    }
}
