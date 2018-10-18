#include<bits/stdc++.h>
using namespace std;
#define mem(a) memset(a,0,sizeof(a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
int t;
fast;
cin>>t;
    while(t--)
    {
    int n,s;
    cin>>n>>s;
    int coin[n],min1[s+1];

    for(int i=0;i<s+1;i++)min1[i]=99999;
    for(int i=0;i<n;i++)cin>>coin[i];
    min1[0]=0;
        for(int i=1;i<=s;i++)
        {
            for(int j=0;j<n;j++){
            if(coin[j]<=i && min1[i-coin[j]]+1 < min1[i])
            min1[i]=min1[i-coin[j]]+1;
            }
        }
        cout<<min1[s]<<endl;
    }
 return 0;
}
