#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void towerOfHanoi(int n, char s, char d, char a){  
    if (n == 1){  
        cout << "Move disk 1 from rod " << s <<  " to rod " << d <<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, s, a, d);  
    cout << "Move disk " << n << " from rod " << s << " to rod " << d << endl;  
    towerOfHanoi(n - 1, a, d, s);  
}  

void CowboyBebop(){
    int n ; 
    cin >> n ;

    auto start =chrono::high_resolution_clock::now();
    towerOfHanoi(n,'A','B','C');
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << duration.count() << " μs" <<  endl;

}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t  = 1;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}