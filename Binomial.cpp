#include <bits/stdc++.h> 
using namespace std; 
int dp[100][100];
int binomialCoeff(int n, int k) 
{ 
    if (dp[n][k] != -1)
        return dp[n][k]; 
   
    if (k == 0) { 
        dp[n][k] = 1; 
        return dp[n][k]; 
    } 
    if (k == n) { 
        dp[n][k] = 1;  
        return dp[n][k]; 
    } 
    dp[n][k]=binomialCoeff(n - 1, k - 1)+binomialCoeff(n - 1, k); 
    return dp[n][k]; 
} 
int main() 
{  
    int n,k; 
    cout<<"Enter N (max 100):";cin>>n;
    cout<<"Enter K (max 100):";cin>>k;

    for (int i = 0; i < (n + 1); i++) { 
        for (int j = 0; j < (k + 1); j++) { 
            dp[i][j] = -1; 
        } 
    } 

    cout<<"Value of C("<<n<<","<<k<<")="<<binomialCoeff(n, k)<<endl; 
    return 0; 
} 
