#include<bits/stdc++.h>
using namespace std;
#define write_file  freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define MAXN 1001


int n;

int main() {
    //open_file write_file
    int n ;
    while(scanf("%d" , &n), n) {
        vector<int> A(n) ;
        int i ;
        int s =0;
        priority_queue<int> pq ;
        forn(i,n) scanf("%d" ,&A[i]) , pq.push(-A[i]) ;
        if(A.size()>1)
        while (1) {
            int a, b ;
            a = pq.top() ; pq.pop() ;
            b = pq.top() ; pq.pop() ;
            s += -(a+b) ;
            if(pq.empty()) break ;

            pq.push(a+b) ;
        }

        cout << s << endl ;
    }




    return 0;
}
