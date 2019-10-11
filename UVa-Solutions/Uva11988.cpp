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
    string s ;
    while (getline(cin ,s)) {
        list <string> A ;
        string ans = "" ;
        bool first = 1 ;
        for (int i = 0 ; i < s.size() ; i++) {
            if(s[i] != '[' && s[i] != ']') ans+=s[i] ;
            else {
                if(first) A.push_front(ans) ;
                else A.push_back(ans) ;
                ans = "" ;
                if (s[i] =='[') first = true ;
                else first = false ;
            }
        }
        if(first) A.push_front(ans) ;
        else A.push_back(ans) ;
        for (auto it = A.begin() ; it != A.end() ; it++) cout << *it ;
            cout << endl ;
    }



    return 0;
}
