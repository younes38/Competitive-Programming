#include<bits/stdc++.h>
using namespace std;
#define write_file  freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define open_file freopen("input.txt","r",stdin);
#define write_file  freopen("output.txt","w",stdout);
#define mem(A,v) memset(A, v, sizeof(A));
#define show(x) cout << x << endl
#define forn(i,n) for(i=0;i<n;i++)

vector<vector<int>> f(vector<vector<int>> B) {
    int X[] = {-1,0,0,1} ;
    int Y[] = {0,-1,1,0} ;

    vector<vector<int>> A(3, vector<int>(3)) ;
    int i,j,x,y,k ;
    forn(i,3) forn(j,3) forn(k,4){ x = i+X[k],y = j+Y[k] ;
        if(x>=0 && x< 3 && y >=0 && y <3) {
            A[i][j]= (A[i][j]+ B[x][y]) %2 ;
        }
    }
    return A ;
}

bool zero(vector<vector<int>> A) {
    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j <3 ; j++)
            if (A[i][j] == 1) return 0;
    return 1 ;
}

int main()
{


   // open_file
    //write_file
    int q ,i,j ,s,B;
    int sz,p ;
    cin >> q ;
    while(q--) {
        string A[3] ;
        forn(i,3) cin >> A[i] ;
        vector<vector<int>> B(3, vector<int> (3)) ;
        forn(i,3) forn(j,3) B[i][j] = (A[i][j] == '1') ;
        i = -1 ;
        while (true) {
            if(zero(B)) break ;
            B = f(B) ;
            i++ ;
        }
        cout << i << endl ;
    }


    return 0;
}
