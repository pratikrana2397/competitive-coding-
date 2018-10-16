#include<bits/stdc++.h>
using namespace std;
long long int tell(long long int a[],long long int n,long long int ra)
{

    long long int count=0,i;
    for(i=0;i<n;i++)
    {
        if(ra>=a[i])
        count++;

    }
    return count;
}
int main(){
    int t;
    long long int n,ra,val,i,a[1000000];

    cin>>t;
    while(t--){
        cin>>n>>ra;
        for( i=0;i<n;i++)
        {
            cin>>a[i];

        }
        long long int Y_val=tell(a,n,ra);
        cout<<n<<" "<<Y_val<<" "<<Y_val<<endl;

    }
    return 0;
}
