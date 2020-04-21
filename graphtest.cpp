#include<bits/stdc++.h>
#include "graph.h"
using namespace std;
#define lli long long int
#define MOD 1000000007

void CowboyBebop(){
    Graph G ; 
    G.DjikstraShortestPath('s');
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t  = 1 ;
    //cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}