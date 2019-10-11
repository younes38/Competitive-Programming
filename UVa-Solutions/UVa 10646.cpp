#include<bits/stdc++.h>
using namespace std;
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);


int main()
{
    //open_file
    //write_file
    int n, m ;
    char c ;
    int i, j ;
    int t ;
    cin >>t ;
    int qq  = 1 ;
    while (t--) { cout << "Case " << qq++ << ": "  ;
        string s ;
        vector<pair<int , string >>  P(52) ;

        for(i = 0; i < 52 ;i++) {
            cin >> s ;
            char c = s[0];
            int v ;
            if (isdigit(c)) v = stoi( s.substr(0,1)) ;
            else v = 10 ;
            P[i] = {v , s} ;
        }
        int q = 3 ;
        int y= 0 ;
        int d = 25 ;

        while (q--) {
            auto p = P[52 - d -1] ;
            y += p.first ;
            d += 11 - p.first ;
        }
        if( y <= 52 - d ) cout << P[y-1].second ;
        else cout << P[y + (d - 25) -1 ].second << endl ;
    }

    return 0;
}
