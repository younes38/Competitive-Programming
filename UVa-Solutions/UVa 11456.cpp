#include<bits/stdc++.h>
using namespace std;

#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));



int main() { //open_file write_file
  int n,t,i,j ;
  scanf("%d", &t) ;
  int q = 1 ;
  while (t--) {
    scanf("%d", &n) ;
    int A[n] ;
    int Dec [n], Inc[n] ;
    int lenI = 0,lenD=0 ;
    int mx = 0 ;
    for(int i=  0; i< n; i++) {
        scanf("%d", &A[i]) ;

    }
    for(int i= n-1; i>= 0 ; i--) {
        int posD = lower_bound(Dec,Dec+lenD, -A[i]) - Dec ;
        int posI = lower_bound(Inc, Inc+lenI, A[i]) - Inc;
        Dec[posD] = -A[i] ;
        Inc[posI] = A[i] ;
        if (posD+1 > lenD) lenD = posD+1 ;
        if (posI+1 > lenI) lenI = posI +1 ;
        mx =max(mx, posD + posI+1) ;
    }
    cout << mx << '\n' ;

  }
  return 0;
}
