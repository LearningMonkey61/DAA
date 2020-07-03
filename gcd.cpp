#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int res)
{
	if(a==b)return a*res;
	else if(a%2==0&&b%2==0)return gcd(a/2,b/2,2*res);
	else if(a%2==0)return gcd(a/2,b,res);
	else if(b%2==0)return gcd(a,b/2,res);
	else if(a>b)return gcd(a-b,b,res);
	else return gcd(a,b-a,res);
}
int main()
{
   int a,b;
   cout<<"Enter 2 numbers:";
   cin>>a>>b;
   cout<<"GCD:"<<gcd(a,b,1);
   return 0;
}