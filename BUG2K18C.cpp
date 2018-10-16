#include <bits/stdc++.h>
using namespace std;

/* Return 1 if arr2[] is a subset of arr1[] */
bool isSubset(char arr1[], char arr2[], int m, int n)
{
    int i = 0, j = 0;

    if (m < n)
       return 0;

    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    while (i < n && j < m )
    {
        if( (int)arr1[j] <(int)arr2[i] )
            j++;
        else if((int)arr1[j] == (int)arr2[i] )
        {
            j++;
            i++;
        }
        else if( (int)arr1[j] > (int)arr2[i] )
            return 0;
    }

    return  (i < n)? false : true;
}

/*Driver program to test above functions */
int main()
{
    int T,timee,delay;
    char ct[1000000],a_t[1000000];
    cin>>T;
    while(T--){
        scanf("%s",ct);
        scanf("%s",a_t);


    if(isSubset(a_t,ct,strlen(a_t),strlen(ct)))
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
        }
    return 0;

}
