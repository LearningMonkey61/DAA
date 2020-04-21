#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

int binomialCoeff(int n, int k) 
{ 
    int C[n + 1][k + 1]; 
    int i, j; 
    for (i = 0; i <= n; i++) { 
        for (j = 0; j <= min(i, k); j++) { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
} 

void CowboyBebop(){
    int n , k ;
    cin >> n >> k ;
    cout << binomialCoeff(n,k) ; 
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