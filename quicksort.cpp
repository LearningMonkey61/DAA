#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

int partition(int a[],int start, int end){
    int pivot = a[end] ; 
    int i = start - 1 ;
   
    for (int j = start ; j < end ; j++){   
        if(a[j] <= pivot ){
            i++;
            swap(a[i], a[j]);
        }
    }
    
    swap(a[i+1],a[end]);
    return i + 1 ; 
}

void QuickSort(int a[], int start , int end){
    if(start < end ){
        int pos = partition(a,start,end) ;
        QuickSort(a,start,pos -1);
        QuickSort(a,pos+1,end); 
    }
}

void CowboyBebop(){
    int n ; 
    cin >> n ;
    int  a[n] ;  
    for(int i = 0; i < n ; i++){
        cin >> a[i] ; 
    }
    QuickSort(a,0,n-1) ; 
    for(int i = 0; i < n ; i++){
        cout << a[i] << " " ; 
    }
    cout << endl; 
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