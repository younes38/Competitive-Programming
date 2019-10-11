#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int > vi ;
typedef vector<ll> vl ;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define forn(i,n) for(i=0;i<n;i++)
#define d(x)             cout<<#x " = "<<(x)<<endl;
#define FAST              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    FAST
    //open_file write_file
    string s;
    int q = 1;
	while (cin >> s && s != "end"){
        vector<stack<char>> S;
        for(char c : s){
            int i = -1;
            for(int j = 0; j < S.size(); j++){
                if (S[j].top() >= c){
                    if (i != -1){
                        if (S[j].top() < S[i].top()) i = j;
                    }else i = j;
                }
            }
            if (i == -1){
                stack<char> st;
                st.push(c);
                S.push_back(st);
            }else S[i].push(c);
        }
        cout <<"Case " << q++ << ": " << S.size() << endl;
	}

	return 0;
}
