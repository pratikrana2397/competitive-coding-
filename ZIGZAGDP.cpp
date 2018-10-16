#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int max(int a, int b) {  return (a > b) ? a : b; } 
int longestseq(int arr[],int n)
{
  int Z[n][2]; 
  
    /* Initialize all values from 1  */
    for (int i = 0; i < n; i++) 
        Z[i][0] = Z[i][1] = 1; 
  
    int res = 1; // Initialize result 
  
    /* Compute values in bottom up manner */
    for (int i = 1; i < n; i++) 
    { 
        // Consider all elements as previous of arr[i] 
        for (int j = 0; j < i; j++) 
        { 
            // If arr[i] is greater, then check with Z[j][1] 
            if (arr[j] < arr[i] && Z[i][0] < Z[j][1] + 1) 
                Z[i][0] = Z[j][1] + 1; 
  
            // If arr[i] is smaller, then check with Z[j][0] 
            if( arr[j] > arr[i] && Z[i][1] < Z[j][0] + 1) 
                Z[i][1] = Z[j][0] + 1; 
        } 
  
        /* Pick maximum of both values at index i  */
        if (res < max(Z[i][0], Z[i][1])) 
            res = max(Z[i][0], Z[i][1]); 
    } 
  
    return res;    
}
int main()
{
    int t;
    fast;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<longestseq(a,n)<<endl;
    }
    return 0;
}