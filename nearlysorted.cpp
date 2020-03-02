#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

int nbSearch(int a[],int start , int end , int item){
    int mid = (start + end) / 2 ;

    if(a[mid+1] == item || a[mid-1] == item){
        return (a[mid+1] == item) ? mid + 2 : mid ;   
    }
    else{
        if( start == end){
            if(a[mid] == item){
                return mid + 1 ; 
            }
            else{
                return -1 ;
            }
        } 
        else if(item <= a[mid]){
            return nbSearch(a,start,mid,item);
        }
        else{
            return nbSearch(a,mid+1,end,item); 
        }
    }
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
    cout << nbSearch(a,0,n,item) << endl  ;
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t = 1  ;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}