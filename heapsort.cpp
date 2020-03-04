#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
void heapify(int arr[], int n, int i) 
{ 
    int smallest = i;
    int l = 2*i + 1;
    int r = 2*i + 2; 
  
    if (l < n && arr[l] < arr[smallest]) 
        smallest = l; 
    if (r < n && arr[r] < arr[smallest]) 
        smallest = r; 
  
    if (smallest != i) { 
        swap(arr[i], arr[smallest]); 
        heapify(arr, n, smallest); 
    } 
} 

void heapsort(int a[],int n){
    for (int i = n/2 - 1; i >= 0; i--){ 
        heapify(a, n, i); 
    }
    for (int i=n-1; i>=0; i--) { 
        swap(a[0], a[i]); 
        heapify(a, i, 0); 
    } 
}

void CowboyBebop(){
    int n ;
    cin >> n ; 
    int a[n] ; 
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    heapsort(a,n);

    for (int i = 0; i < n; i++){
        cout << a[i] << " "; 
    }

}
using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t  = 1 ;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}