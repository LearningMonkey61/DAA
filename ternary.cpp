#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
        if (key < ar[mid1]) {
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }
    return -1;
}

void CowboyBebop(){
    int n ; 
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int item ;
    cin >> item ; 
 cout << ternarySearch(0,n,item,a) ;    
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t ;
    cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}