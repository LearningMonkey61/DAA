#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
#define buildings vector<pair<pair<int,int>,int>>
#define sky vector<pair<int,int>>

sky* findSkyline(buildings &b , int l , int h ){
    sky res;
    if(l == h){
        sky base ;
        base.push_back(make_pair(b[l].first.first,b[l].second)) ; 
        base.push_back(make_pair(b[l].first.second,0)) ; 
        return &base; 
    }
    
    int mid = (l + h ) / 2 ;
    
    sky *s1 = ; 
     



    return &s ;
}


void CowboyBebop(){
    int n ; 
    cin >> n ; 
    buildings coordinates ; 

    int l , r , h ; 
    for(int i = 0 ; i < n ; i++){
        cin >> l >> h >> r ;
        coordinates.push_back({{l,r},h});
    }    
    sort(coordinates.begin(),coordinates.end());

    sky *s = findSkyline(coordinates, 0 , n-1) ; 
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