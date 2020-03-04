#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
#define buildings vector<pair<pair<int,int>,int>>
#define sky vector<pair<int,int>>

void pushback(sky &s, int n, int x, int maxh){
    if(n > 0 && s[n-1].second == maxh )
        return;
    if(n > 0 && s[n-1].first == x ){
        s[n-1].second = max(s[n-1].second,maxh);
        return ;
    } 
    s.push_back({x,maxh});
   return ;
}

sky merge(sky &s1, sky &s2){
    sky s3 ; 
    int h1 = 0 , h2 = 0 ;
    int i = 0 , j = 0 ;
    while (i < s1.size() && j < s2.size()){
       
        if(s1[i].first < s2[j].first){
            int x1 = s1[i].first ; 
            h1 = s1[i].second ;
            int maxh = max(h1,h2) ; 
            pushback(s3,s3.size(),x1,maxh);
            i++ ;
        }
        else{
            int x2 = s2[j].first ; 
            h2 = s2[j].second ; 
            int maxh = max(h1,h2) ;
            pushback(s3,s3.size(),x2,maxh) ;
            j++ ;
        }
    }

    while (i < s1.size()){
        s3.push_back({s1[i].first,s1[i].second}) ;
        i++ ;
    }
    
    while (j < s2.size()){
        s3.push_back({s2[j].first,s2[j].second}) ;
        j++ ;
    }

    return s3 ; 
}

sky findSkyline(buildings &b , int l , int h ){
    sky res;
    // cout<<l<<" =="<<h<<endl;
    if(l == h){
        sky base ;
        base.push_back({b[l].first.first,b[l].second}) ; 
        base.push_back({b[l].first.second,0}) ; 
        return base; 
    }
    int mid = (l + h ) / 2 ;
    sky s1 = findSkyline(b, l, mid) ;
    sky s2 = findSkyline(b,mid+1, h ) ; 
    res = merge(s1,s2);
    return res ;
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

    sky s = findSkyline(coordinates, 0 , n-1) ;

    for(auto c : s){
        cout << c.first << " " << c.second << endl ;
    }     
    

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