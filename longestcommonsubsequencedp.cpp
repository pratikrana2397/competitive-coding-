#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],s[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=0;
        for(int i=0;i<n;i++)s[i]=1;

        int temp;
        for(int j=1;j<n;j++)
        {
            int temp=s[j];
            for(int k=j-1;k>=0;k--)
            {
                if(a[k]<a[j])
                temp=max(temp,s[j]+s[k]);
            }
            s[j]=temp;
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
