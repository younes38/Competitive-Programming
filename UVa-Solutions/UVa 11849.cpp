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
    int n, m ;
    while(scanf("%d %d" , &n, &m), n||m) {
        set<int> a,b ;
        int v ;
        int cp=0 ;
        while (n--) scanf("%d", &v), a.insert(v) ;
        while (m--) {scanf("%d", &v); if(a.find(v)!=a.end())cp++ ;}
        printf("%d\n" , cp) ;

    }




    return 0;
}
