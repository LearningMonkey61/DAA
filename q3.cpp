#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

int getCumulateSum(int n){
    return (n * (n + 1)) / 2;
}

int minDaysToEmpty(int c, int l){
    if (c <= l)
        return c;
    int lo = 0;
    int hi = 1e4;
    int mid;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (getCumulateSum(mid) >= (c - l))
            hi = mid;
        else
            lo = mid + 1;
    }
    return (l + lo);
}


void CowboyBebop(){
    int c, l;
    cin >> c >> l ;
    cout << minDaysToEmpty(c,l) << endl ; 
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
