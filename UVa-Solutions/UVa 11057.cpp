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


    int n;
    while (cin >> n){
        int A[n];
        for(int &a: A) cin >> a;
        sort (A, A + n);
        int m;
        cin >> m;
        int i = 0, j = n -1;
        int a, b;
        while (i < j){
            if (A[i] + A[j] == m) {
                a = A[i];
                b = A[j];
                i++;
            }else{
                if (m > A[i] + A[j]) i++;
                else j--;
            }
        }
        cout << "Peter should buy books whose prices are "<< a << " and " << b <<".\n\n";
    }
    return 0;
}
