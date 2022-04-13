#include<bits/stdc++.h>
using namespace std;
int solve[10000];
int main()
{
int cnt=0;//计数 
   long long n=0;
   cin>>n; 
   long long set=(n*(n+1)/2);//存储每个子集的容量 
   if((set%2)!=0)
	{
	   		cout<<'0';
	} 
   set=set/2;
   solve[0]=1;
   for(int i=1;i<=n;i++)
   {
   		for(int j=set;j>=i;j--)
   		{
   			solve[j]+=solve[j-i];
		}
   }
  
   cout<<solve[set]/2<<endl;
   return 0;
}
