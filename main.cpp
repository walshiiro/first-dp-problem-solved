#include <bits/stdc++.h>
using namespace std;

int main(){

int x;
cin>>x;
int a[1000],b[1000];


for(int i=0;i<x;i++)
cin>>a[i];
b[0]=a[0];
b[1]=a[1];
for(int i=2;i<x;i++)
{

    b[i]=min(b[i-2],b[i-1])+a[i];

}
cout<<min(b[x-1],b[x-2]);
}