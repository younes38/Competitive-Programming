#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<int > vi ;
typedef vector<ll> vl ;
#define endl '\n'
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)
#define D(x)             cout<<#x " = "<<(x)<<endl
#define lower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
#define upper(su) transform(su.begin(), su.end(), su.begin(), ::toupper);
#define FAST ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0) ;


int main()
{
    //open_file write_file
    FAST
    int t;
    string s;
    map<char, int> go;
    for(int i = 1; i <= 26; i++)
        go[(char)i + 'A' - 1] = i;
    go[' '] = 0;
    map<int, char> back;
    for(int i = 1; i<= 26; i++)
        back[i] = (char) (i - 1 + 'A');
    back[0] = ' ';

    set<string> S;
    while (cin >> s && s!="#"){
        S.insert(s);
    }
    cin.ignore();
    getline(cin, s);
    int mx = 0;
    string save;
    for(int k = 0; k< 27; k++){
        string ans;
        for(char c : s){
            ans += back[(go[c] + k) % 27];
        }
        stringstream ss;
        ss << ans;
        string word;
        int cp = 0;
        while (ss >> word){
            if (S.count(word) > 0) cp++;
        }
        if (cp > mx){
            mx = cp ;
            save = ans;
        }
    }

    stringstream ss;
    ss << save;
    string o;
    vector<string> anss;
    while (ss >> o){
        anss.push_back(o);
    }
    int m = anss.size();
    int cp = 0;
    for(int i = 0; i < m; i++){
        if (cp == 0){
            cout << anss[i];
            cp += anss[i].size() + 1;
        }else{
            if (cp + anss[i].size() <= 60){
                cout << " " << anss[i];
                cp += anss[i].size() + 1;
            }else {
                cout << endl;
                cp = 0;
                i--;
            }
        }
    }
    cout << endl;

    return 0;
}

