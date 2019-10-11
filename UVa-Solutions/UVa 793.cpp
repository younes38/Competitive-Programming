
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


typedef vector<int> vi;

// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics
class UnionFind {                                              // OOP style
private:
  vi p, rank, setSize;                       // remember: vi is vector<int>
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) { numSets--;
    int x = findSet(i), y = findSet(j);
    // rank is used to keep the tree short
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};


int main () {
    ios::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0) ;
    //open_file write_file
    int n,t,i ;
    int k;
    string s;
    cin >> t ;
    while (t--) {
        cin >> n ;cin.ignore() ;
        UnionFind S(n);
        int cor = 0 , inc = 0 ;
        while(getline(cin, s), s!="") {
            stringstream ss(s) ;
            char c ; int a,b ;
            ss >> c; ss>>a ; ss>>b ;
            a-- ; b-- ;
            if(c == 'c'){
                S.unionSet(a,b) ;
            }else {
                if (S.isSameSet(a,b)) cor++ ; else inc++ ;
            }

        }
        cout << cor << "," << inc << endl ;
        if (t) cout << endl ;
    }
    return 0;
}

