#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,k;
    cin>>x>>k;
    int a[1000];
    bool dp[1000][1000];
    int c[1000];

    for(int i=1;i<=x;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=k;i++)
    {

        for(int j=1;j<=x;j++)
            dp[i][j]=false;
        c[i]=9999999;
    }
    for (int i=1;i<=k;i++)
    {
        for (int j=1;j<=x;j++)
        {
            if(a[j]==i || dp[i-a[j]][j-1]==true || dp[i][j-1]==true )
            {
                dp[i][j]=true;
                c[i]=min(j,c[i]);

            }
        }
    }
    int tong = k;
    while (tong>0)
    {
        cout<<a[c[tong]]<<" ";
        tong-=a[c[tong]];
    }
    cout<<endl;
}