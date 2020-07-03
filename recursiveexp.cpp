#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

int power(int x, unsigned int y){
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

void CowboyBebop(){
    int x , y ;
    cin >> x >> y ;
    cout << power(x,y) ;
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