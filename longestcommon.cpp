#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
enum dir { up = 1 , lleft = 2 , diag = 3} ; 

void CowboyBebop(){
    string s1, s2 ; 
    cin >> s1 >> s2 ; 
    int m = s1.length() ; 
    int n = s2.length() ;

    int c[m+1][n+1] ;
    int d[m+1][n+1] ;

    for(int i = 0 ; i < m +1  ; i++){
        for(int j = 0 ; j < n+1  ; j++){
            c[i][j] = 0 ; 
            d[i][j] = 0 ; 
        }
    } 
    
    for (int i = 0; i <= m; i++){  
        for (int j = 0; j <= n; j++){  
        if (i == 0 || j == 0){  
            c[i][j] = 0;
            d[i][j] = 0 ; 
        }
        else if (s1[i - 1] == s2[j - 1])  {
            c[i][j] = c[i - 1][j - 1] + 1;  
            d[i][j] = 3 ; 
        }
        else{
            c[i][j] = max(c[i - 1][j], c[i][j - 1]);  
                if(c[i - 1][j] >= c[i][j - 1]) {d[i][j] = 1; } 
                else {d[i][j] = 2 ;}
            }  
        } 
    }
    
    string s ;

    int i = m , j = n ;  
    while (c[i][j]){
        if(d[i][j] == 3 ){
            s = s + (s1[i-1]);
            i--;
            j--;
            
        }
        else if (d[i][j] == 2){
            j--;
        }
        else{
            i--; 
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t = 1;
    //cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}