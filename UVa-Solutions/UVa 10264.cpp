#include<bits/stdc++.h>
using namespace std;
#define write_file  freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)


int main() {

    int n ;
    while (scanf("%d" , &n)==1){
        int A[1<<n] ;
        for(int i= 0 ; i < (1<<n); i++) {
            cin >> A[i] ;
        }
        vector<int> B(1<<n, 0);
        for(int i =0 ; i < (1<<n) ; i++) {
            for(int j = 0 ; j <n; j++) {
                B[i]+= A[i^(1<<j)] ;
            }
        }
        int mx = 0 ;
        for(int i =0 ; i < (1<<n) ; i++) {
            for(int j = 0 ; j <n; j++) {
                mx = max(mx, B[i]+ B[i^(1<<j)]) ;
            }
        }
        printf("%d\n" ,mx) ;

    }
    return 0 ;
}

