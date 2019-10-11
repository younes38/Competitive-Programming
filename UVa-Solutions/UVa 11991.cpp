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


int main() {
    //open_file write_file
    int n, m ;
    while(scanf("%d %d" , &n, &m) == 2) {
        map<int , vector<int> > mp ;
        int i ;
        forn(i,n) {
            int v ;
            scanf("%d" , &v) ;
            mp[v].push_back(i);
        }
        while (m--) {
            int v, k ;
            scanf("%d %d", &k, &v) ;
            if ( (int) mp[v].size() >= k) printf("%d\n" , mp[v][k-1] +1 ) ;
            else printf("0\n") ;
        }
    }




    return 0;
}
