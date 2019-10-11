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
    int n ;
    scanf("%d", &n) ;
    int A[n], B[n] ;
    for(int i = 0; i<n; i++) scanf("%d", &A[i]) ; // height
    for(int i = 0; i<n; i++) scanf("%d", &B[i]) ; // width

    int La[n], Lb[n];
    int a = 0, b = 0 ;
    for(int i = 0; i<n ; i++) {
        La[i] =Lb[i] = B[i] ;
        for(int j = 0; j < i ; j++) {
            if (A[j] < A[i]) La[i] = max(La[i], B[i] + La[j]) ;
            if (A[j] > A[i]) Lb[i] = max(Lb[i], B[i] + Lb[j]) ;
        }
        a = max (a, La[i]) ;
        b = max (b, Lb[i]) ;
    }
    if( a>=b) printf("Case %d. Increasing (%d). Decreasing (%d).\n",q++ , a, b) ;
    else printf("Case %d. Decreasing (%d). Increasing (%d).\n",q++ , b, a) ;
  }


  return 0;
}
