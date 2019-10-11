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
    int n ;
    while(scanf("%d" , &n) == 1) {
        bool qu = 1 , stk = 1, priQ = 1;
        vector<int> st ;
        queue <int> q ;
        priority_queue<int> pq ;
        while (n--) {
            int op, v ;
            scanf("%d %d", &op, &v) ;
            if (op == 1) st.push_back(v), pq.push(v), q.push(v);
            else {
                if(q.empty()) qu=false ;
                else if(q.front() != v) qu=false ; else q.pop() ;

                if(!st.size()) stk = false ;
                else if (st[st.size()-1] != v) stk = false; else st.pop_back();

                if(pq.empty()) priQ = false ;
                else if(pq.top()!=v) priQ = false ; else pq.pop() ;

            }
        }
        if(priQ&&!stk&&!qu) printf("priority queue\n") ;
        else if (!priQ&&stk&&!qu) printf("stack\n") ;
        else if (!priQ&&!stk&&qu)printf("queue\n") ;
        else if (!priQ&&!stk&&!qu) printf("impossible\n") ;
        else printf("not sure\n") ;
    }




    return 0;
}
