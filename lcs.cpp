#include<bits/stdc++.h>
using namespace std;

void lcs( string s, string t, int m, int n ) 
{ 
   int L[m+1][n+1]; 
   for (int i=0; i<=m; i++) 
   { 
     for (int j=0; j<=n; j++) 
     { 
       if (i == 0 || j == 0) 
         L[i][j] = 0; 
       else if (s[i-1] == t[j-1]) 
         L[i][j] = L[i-1][j-1] + 1; 
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]); 
     } 
   } 

   int index = L[m][n]; 
   char lcs[index+1]; 
   lcs[index] = '\0'; 
   int i = m, j = n; 
   while (i > 0 && j > 0) 
   { 
      if (s[i-1] == t[j-1]) 
      { 
          lcs[index-1] = s[i-1];
          i--; j--; index--;    
      } 
      else if (L[i-1][j] > L[i][j-1]) 
         i--; 
      else
         j--; 
   } 
   cout << "LCS of " << s << " and " << t << " is " << lcs; 
} 

int main()
{
   int n,m;
   string s,t;

   cout<<"Enter Length of First String:";
   cin>>n;
   cout<<"Enter First String:";
   cin>>s;

   cout<<"Enter Length of Second String:";
   cin>>n;
   cout<<"Enter Second String:";
   cin>>s;
   

   return 0;
}