#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
#define buildings vector<pair<pair<int,int>,int>>
#define sky vector<pair<int,int>>

auto merge(sky s1, sky s2){
    sky final ;
    int h1 = 0 , h2 = 0 ; 
    int i = 0 , j = 0 ;
    while (i < s1.size() && j < s2.size()){   
        if( (s1[i].first  < s2[j].first)){
            int x1 = (*(s1.begin()+i)).first; 
            h1 = (*(s1.begin()+i)).second; 
            int maxh = max(h1, h2); 
            final.push_back({x1, maxh}); 
            i++; 
        }
        else{ 
            int x2 = (*(s2.begin()+j)).first; 
            h2 = (*(s2.begin()+i)).second ; 
            int maxh = max(h1, h2); 
            final.push_back({x2, maxh}); 
            j++; 
        } 
    }

    while (i < s1.size()){ 
        final.push_back({(*(s1.begin()+i)).first,(*(s1.begin()+i)).second}); 
        i++; 
    } 
    while (j < s2.size()){ 
        final.push_back({(*(s2.begin()+j)).first,(*(s2.begin()+i)).second}); 
        j++; 
    } 

    return final.begin(); 
}

sky *findSkyline(buildings b , int l ,int h){
    if(l == h){
        sky *base ;
        base->push_back(make_pair(b[l].first.first,b[l].second)) ; 
        base->push_back(make_pair(b[l].first.second,0)) ; 
        return base; 
    } 
    
    int mid = ( l + h ) / 2 ; 

    sky *s1 = findSkyline(b, l, mid) ;
    sky *s2 = findSkyline(b,mid+1 , h ) ; 
    sky res ;
    res.begin() = merge(s1,s2);

    return res ; 

} 


void CowboyBebop(){
    int n;
    cin >> n ;
    buildings coordinates ;
    int l , r , h ;
    for (int i = 0; i < n; i++){
        cin >> l >> h >> r ;
        coordinates.push_back(make_pair(make_pair(l,r),h));
    }
    sort(coordinates.begin(),coordinates.end());

    sky *s = findSkyline(coordinates, 0, n-1) ; 

    for(auto c : *s ){
        cout << c.first << " " << c.second << endl ;
    }
    
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t = 1 ;
    //  cin >> t;


    while(t--){
        CowboyBebop();
    }

    return 0;
}