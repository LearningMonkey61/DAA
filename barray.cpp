#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void CowboyBebop(){
    int N ; 
   N=6;
    int arr[N+1];
    int hsh[N+1];
    for(int i=0;i<N;i++)
    hsh[i+1]=i+1,arr[i+1]=i+1;

    int ok=1;
   
    for(int i=2;i<=N-1;i++)
    {
        if(hsh[i-1]<hsh[i]&&hsh[i+1]>hsh[i])
        {
           if(ok)
           { 
            int t1=hsh[i-1],t2=hsh[i];
            swap(arr[hsh[i]],arr[hsh[i-1]]);
            hsh[i-1]=t2;
            hsh[i]=t1;
            ok^=1;
           }
           else {
            int t1=hsh[i+1],t2=hsh[i];
            swap(arr[hsh[i]],arr[hsh[i+1]]);
            hsh[i+1]=t2;
            hsh[i]=t1;
            ok^=1;
           }
        }
    }
     for(int i=1;i<=N;i++)
    cout<<arr[i]<<" ";
    
    for(int i=2;i<=N-1;i++)
    {
        if(hsh[i-1]<hsh[i]&&hsh[i+1]>hsh[i])
        {
            cout<<"NOT complete";return;
        }
    }
    cout<<"Complete Baby , here's your array :";
    for(int i=1;i<=N;i++)
    cout<<arr[i]<<" ";
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int t = 1;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}