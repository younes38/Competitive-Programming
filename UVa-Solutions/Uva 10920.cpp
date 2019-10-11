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
    int q ,i,j ,s,B;
    int sz,p ;
    while (scanf("%d %d",&sz ,&p), p||sz) {
        int sq = (int) sqrt(p) ;

        if(!(sq&1)) sq-- ;

        int nb = p- sq*sq ;

        int x = sz/2+sq/2 , y = sz/2 +sq/2;
        if(nb>0) x++ , nb-- ;
        if (nb <= sq) y=y-nb , nb=0 ;
        else if(nb) y -=sq,nb-=sq ;

        if (nb <= sq+1) x=x-nb , nb=0 ;
        else if(nb) x -=sq+1,nb-=sq+1 ;

        if (nb <= sq+1) y=y+nb , nb=0 ;
        else if(nb) y +=sq+1,nb-=sq+1 ;

        x=x+nb , nb=0 ;


        printf("Line = %d, column = %d.\n" , x+1 , y+1) ;
    }

    return 0;
}
