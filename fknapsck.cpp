#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void CowboyBebop(float V[],int n){
    sort(V,V+n);
    
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t = 1;
    //cin >> t;
    int n ; 
    cin >> n ;
    int W[n],P[n] ;
    float D[n];  
    for (int i = 0; i < n; i++){
        cin >> W[i] >> P[i] ;
        D[i] = float(P[i] / W[i]) ;  
    }
    while(t--){
        CowboyBebop(D,n);
    }

    return 0;
}