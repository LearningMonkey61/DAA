#include <bits/stdc++.h> 
using namespace std;

int min(int a, int b) 
{  
    return a < b ? a : b;  
}  
int main()  
{  
    int n;
    cout<<"Enter Number Of Stations:";
    cin>>n;

    int a[2][n]; 
    int t[2][n]; 
    int e[2],x[2];  

    cout<<"Enter Times For 1st Assembly Line:";
    for (int i=0;i<n;++i)
        cin>>a[0][i];

    cout<<"Enter Times For 2st Assembly Line:";
    for (int i=0;i<n;++i)
        cin>>a[1][i];

    
    cout<<"Enter Transfer Times For 1st Assembly Line:";
    for (int i=0;i<n;++i)
        cin>>t[0][i];

    cout<<"Enter Transfer Times For 2st Assembly Line:";
    for (int i=0;i<n;++i)
        cin>>t[1][i];

    cout<<"Enter Entry Time for 1st Assembly Line:";
    cin>>e[0];
    cout<<"Enter Exit Time For 1st Assembly Line:";
    cin>>x[0];
    cout<<"Enter Entry Time for 2nd Assembly Line:";
    cin>>e[1];
    cout<<"Enter Exit Time for 2nd Assembly Line:";
    cin>>x[1];
    
    int T1[n],T2[n];  
    T1[0]=e[0]+a[0][0];  
    T2[0]=e[1]+a[1][0];  
    for (int i=1;i<n;++i)  
    {  
        T1[i]=min(T1[i-1]+a[0][i],T2[i-1]+t[1][i]+a[0][i]);  
        T2[i]=min(T2[i-1]+a[1][i],T1[i-1]+t[0][i]+a[1][i]);  
    }  

    cout<<min(T1[n-1]+x[0],T2[n-1]+x[1]);  
  
    return 0;  
}  