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

/*
    open_file
    write_file*/
    int q ,i,j ,s,B;
    int n, N;
    int k ,l ;
    while (cin>> N >> n , N||n) {
        vector<string> A(n), Z(N);

        forn(i,N) cin >> Z[i];
        forn(i,n) cin >> A[i];
        int x=0,y=0,z=0,t=0 ;
        forn(i,N-n+1) {
            forn(j,N-n+1) {
                bool a=1,b=1,c=1,d=1;
                forn(l,n) forn(k,n) {
                    if (Z[i+l][j+k] != A[l][k]) a = 0 ;
                    if (Z[i+l][j+k] != A[k][n-l-1]) b = 0 ;
                    if (Z[i+l][j+k] != A[n-l-1][n-k-1]) c = 0 ;
                    if (Z[i+l][j+k] != A[n-k-1][l]) d = 0 ;

                }
                x+=a , y+= b , z+=c, t+=d ;
            }
        }
        cout << x << " " << t << " "<< z << " " << y << endl ;
    }

    return 0;
}
