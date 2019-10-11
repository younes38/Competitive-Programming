#include<bits/stdc++.h>

using namespace std;
typedef long long ll ;

#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define lower(sl) transform((sl).begin(), (sl).end(), (sl).begin(), ::tolower);
#define upper(su) transform((su).begin(), (su).end(), (su).begin(), ::toupper);

ll powmod(ll a, ll b , ll m) {
    ll res = 1LL ;
    while (b)  {
        if (b&1) res = (res * a) %m ;
        b =b>>1 ;
        a =(a*a) % m ;
    }
    return res ;
}


int main()
{
    //open_file write_file
    //ios::sync_with_stdio(false);
    //cin.tie(0) ; cout.tie(0) ;
    ll n ; int t ;
    ll q=1, m,k;
    int A[6000] ; A[0] = 1 ;
    int i2 = 0, i3=0, i5=0, i7 = 0 ;
    int last = 0 ;

    for(int i = 1; i<6000; i++) {
        if (A[i2]*2 <= A[last])i2++ ;
        if (A[i3]*3 <= A[last])i3++ ;
        if (A[i5]*5 <= A[last])i5++ ;
        if (A[i7]*7 <= A[last])i7++ ;
        int v = min (A[i2]*2, min(A[i3]*3,min(A[i5]*5,A[i7]*7) )) ;
        last++ ;
        A[last] = v ;
    }
    while (cin >> n, n) {
        cout << "The " << n << (  (n%10 != 1 && n%10 !=2 && n%10 != 3)|| (n%100>10 && n%100< 20) ? "th" : (n%10 == 2) ? "nd" : n%10 == 1 ? "st" : "rd" ) << " humble number is "<< A[n-1] <<".\n" ;
    }

    return 0;
}
