#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void CowboyBebop(){
	int n,i,counter,count_of=0;
	cin>>n;
	long long a[n];
	bool one = false;
	for(i=0;i<n;i++){
        a[i] = i+1 ;
    }
    counter=0;
    for(i=0;i<n;i++){
           if(a[i]==-1) count_of++;
           else if(a[i]==1) one=true;
           else if(a[i]==0) 0;
           else counter++;
        if(counter==2)  break;
    }
    if(i!=n) cout<<"not a beautiful array"<< endl;
    else{
           if(count_of>=1&&counter==1)  cout<<"not a beautiful array"<<endl;
           else if(count_of>1&&one==false)  cout<<"not a beautiful array"<<endl;
           else cout<<"yes it is a beautiful array"<<endl;
    }
}


using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t =1 ;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}