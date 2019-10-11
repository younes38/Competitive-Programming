#include<bits/stdc++.h>
using namespace std;
#define write_file  freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)



int main()
{


   // open_file
   // write_file
    int q ,i,j ,B;
    int sz,p ;

    string s ;
    while(cin>> s , s!="#") {
        if (next_permutation(all(s))) cout << s << endl ;
        else cout << "No Successor" << endl ;

    }


    return 0;
}
