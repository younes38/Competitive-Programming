#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;

#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
ll lcm (ll a , ll b) {return a*b/__gcd(a,b) ;}
// read a line of int
void read ( vi &a) {
    string s ;
    getline(cin , s) ;
        stringstream ss(s) ;
        int x ;
        while (ss>> x) {
            a.push_back(x) ;
        }
}

int main()

{
    //open_file write_file
    int i,j,k,n,l,t ;


    cin >> t ; cin.ignore() ;
    string s;
    while(t--) {
        vector<vector<int>> adj(26);
        bool exist[26], visited[26] ; mem(exist , 0); mem(visited, false );
        while(getline(cin, s), s[0]!='*') {
            int a,b ;
            a = s[1] - 'A', b = s[3] - 'A' ;
            adj[a].push_back(b) ;
            adj[b].push_back(a) ;
        }

        getline(cin, s) ;
        for(int i=0 ; i< s.size(); i+=2){

            int j = s[i] - 'A' ;
            exist[j] = 1 ;
        }
        int one=0 ,tree=0 ;
        for (int i = 0 ; i <26;i++) {
            if (exist[i] && !visited[i]) {
                if (!adj[i].size()) one++ , visited[i] = 1 ;
                else{
                    tree++ ;
                    queue<int> q ;
                    q.push(i) ;
                    while (!q.empty()) {
                        int v = q.front() ; q.pop() ;
                        visited[v] = 1 ;
                        for (int j=0; j < adj[v].size() ;j++)
                            if (!visited[adj[v][j]]) q.push(adj[v][j]) ;
                    }
                }
            }
        }
        cout << "There are " << tree <<" tree(s) and " << one << " acorn(s)."<< endl ;
    }
    //cerr << clock() / (CLOCKS_PER_SEC + 0.0L) << endl;
    return 0;
}
