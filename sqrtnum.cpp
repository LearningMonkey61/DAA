#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
 // DONE 
int sqrt(int x ){
    for(int i = 1 ; i < x / 2 ; i++ ){
        if(i*i == x){
            return i ;
            break;
        }
        else if((i+1)*(i+1) > x){
            return i;
        }
    }
}

void CowboyBebop(){
    int x ; 
    cin >> x ;
    x = sqrt(x);
    cout << x <<endl;
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