#include<iostream>
#include<bits/stdc++.h>
int main();
{
   int num,pos,result;
   cin>>num>>pos;
   result=num^((pos-1)<<1);
   cout<<result;
}  
