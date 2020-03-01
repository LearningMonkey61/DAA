#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

int findsmallest(int a[],int n){
    int small = 0 ; 
    for (int i = 0; i < n; i++){
        if(a[1] > a[i]){
            small = i ; 
            break ;  
        }    
    }
    return small;  
}

void CowboyBebop(){
    int n ;
    cin >> n ;
    int a[n] ;
    for (int i = 0; i < n; i++){
        cin >> a[i] ;  
    }
    cout << "Rotation Extent : " << findsmallest(a,n) << endl ;
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t ;
    cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}