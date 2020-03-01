#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void CowboyBebop(){
    int  n ; 
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int d = floor((arr[0] + arr[n-1])/n);
    int k ;

    for (int i = 0,k = 0 ; i < n; i++,k++)
    {
        if(arr[i] == (arr[0] + k*d)){
            continue;
        }
        else{
            cout << arr[0] + k*d << " is missing from the AP" << endl ;
            k++;
        }
    }
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