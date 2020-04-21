#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
int solve(int x,vector<int> coins){
    
}

void CowboyBebop(){
    int n ; 
    cin >> n ;
    vector<int> coins(n); 
    for(int i = 0 ; i < n ; i++){
        cin >> coins[i] ; 
    }
    int x ;
    cin >> x ;
    cout << solve(x, coins) << endl   ;
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t = 1  ;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}