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



int a, b, n;

int f(int x){return 1LL * (1LL * a * x % n * x + b) % n; }

//T : the minimum cycle
//first : the first position that f(first) == f(first + T)
int first, TT;
//x0 : the first element in the sequence
// pre-defined
void find_cycle(int x0){
    int tortoise, hare;
    // 1 : find k * TT
    tortoise = f(x0);
    hare = f(f(x0));
    while (hare != tortoise) hare = f(f(hare)), tortoise = f(tortoise);
    // 2 : find first
    hare = x0;
    first = 0;
    while (hare != tortoise) hare = f(hare), tortoise = f(tortoise), first++;
    // 3 : find TT
    tortoise = f(hare);
    TT = 1;
    while (hare != tortoise) tortoise = f(tortoise), TT++;
}


int main() {
    FAST
    //open_file //write_file
    while(cin >> n >> a >> b && n){
        find_cycle(0);
        cout << n - TT << endl;
    }
}
