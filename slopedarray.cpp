#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void CowboyBebop(){
    int n ;
    cin >> n ; 
    int a[n] ;
    for(int i = 0; i < n ; i++){
        cin >> a[i] ;
    }

    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " "; 
    }

}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t = 1  ;
     // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}