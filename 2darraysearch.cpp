#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
#define mat vector<vector<int>>
 // uses divide and conquer  on a 2d array where
 // every row and every column is sorted ascendingly  


void dsearch(mat a,int item,int fR , int tR, int fC ,int tC){
    int i = fR + (tR-fR)/2; 
    int j = fC + (tC-fC)/2;

    if (a[i][j] == item) 
       cout<<"Found "<< item << " at "<< i << " " << j<<endl; 
    else{
            if (i != tR || j != fC)  dsearch(a,item, fR, i, j, tC); 

            if (fR == tR && fC + 1 == tC) 
                if (a[fR][tC] == item) 
                    cout<<"Found "<< item << " at "<< fR << " " << tC <<endl; 

            if (a[i][j] < item) { 
                if (i + 1 <= tR) 
                dsearch(a, item, i + 1, tR, fC, tC); 
            } 
            else
            { 
                if (j - 1 >= fC) 
               dsearch(a,item, fR, tR, fC, j - 1); 
            }
    }
}

void CowboyBebop(){
    int m , n ; 
    cin >> m >> n ;
    
    mat v( m , vector<int>(n));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j] ;
        }
    }
    
    int item ;
    cin >> item ; 

    dsearch(v,item,0,m-1,0,n-1) ;

}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t = 1 ;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}