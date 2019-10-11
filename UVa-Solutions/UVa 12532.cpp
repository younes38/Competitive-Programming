
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



typedef vector<int> vi;

class SegTree {         // the segment tree is stored like a heap array
private: vi st, A;            // recall that vi is: typedef vector<int> vi;
  int n;
  int left (int p) { return p << 1; }     // same as binary heap operations
  int right(int p) { return (p << 1) + 1; }

  void build(int p, int L, int R) {                           // O(n log n)
    if (L == R)                            // as L == R, either one is fine
      st[p] = A[L];                                         // store the index
    else {                                // recursively compute the values
      build(left(p) , L              , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R          );
      int p1 = st[left(p)], p2 = st[right(p)];

      /* modify here */
      st[p] = p1*p2 ;
  } }

  int rmq(int p, int L, int R, int i, int j) {                  // O(log n)
    if (i >  R || j <  L) return 1; // current segment outside query range
    if (L >= i && R <= j) return st[p];               // inside query range

     // compute the min position in the left and right part of the interval
    int p1 = rmq(left(p) , L              , (L+R) / 2, i, j);
    int p2 = rmq(right(p), (L+R) / 2 + 1, R          , i, j);

    /* modify here */
    /*if (p1 == 1) return p2;   // if we try to access segment outside query
    if (p2 == 1) return p1;   */                            // same as above
    return p1*p2; }          // as as in build routine

  int update_point(int p, int L, int R, int idx, int new_value) {
    // this update code is still preliminary, i == j
    // must be able to update range in the future!
    int i = idx, j = idx;

    // if the current interval does not intersect
    // the update interval, return this st node value!
    if (i > R || j < L)
      return st[p];

    // if the current interval is included in the update range,
    // update that st[node]
    if (L == i && R == j) {
      A[i] = new_value; // update the underlying array
      return st[p] = A[L]; // this index
    }

    // compute the minimum pition in the
    // left and right part of the interval
    int p1, p2;
    p1 = update_point(left(p) , L              , (L + R) / 2, idx, new_value);
    p2 = update_point(right(p), (L + R) / 2 + 1, R          , idx, new_value);

    // return the pition where the overall minimum is

    /* modify here */
    return st[p] = p1*p2;
  }

public:
  SegTree(const vi &_A) {
    A = _A; n = (int)A.size();              // copy content for local usage
    st.assign(4 * n, 0);            // create large enough vector of zeroes
    build(1, 0, n - 1);                                  // recursive build
  }

  int rmq(int i, int j) { return rmq(1, 0, n - 1, i, j); }   // overloading

  int update_point(int idx, int new_value) {
    return update_point(1, 0, n - 1, idx, new_value); }
};




int main () {
     ios::sync_with_stdio(false);
    cin.tie(0) ; cout.tie(0) ;
   // open_file write_file
    int i, n ,k ;
    while (cin >> n >>k) {

        vi A(n) ;
        forn(i,n) {
            cin>> A[i] ;
            if (A[i] <0)A[i] = -1 ;
            else if (A[i] > 0 ) A[i] = 1 ;
        }
        SegTree S(A) ;
        while (k--) {
            char c ;
            int a, b ;
            cin >> c >> a >> b ;
            if(c == 'C'){
                a-- ;
                if(b>0) b = 1; else if(b<0) b = -1 ;
                S.update_point(a,b) ;
            }else {
                int v = S.rmq(a-1,b-1) ;
                cout << ((v==0) ?'0' : (v<0) ? '-' : '+' )  ;
            }
        }
        cout << endl;
    }
    return 0;
}
