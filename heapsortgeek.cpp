#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i)
{
int largest,l,r;
largest = i ;
l= 2*i+1;
r= 2*i+2;

    if(l<n && arr[l]>arr[largest])
    largest=l;

    if(r<n && arr[r]>arr[largest])
    largest=r;

    if(i!=largest){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
        }
}
void heapsort(int arr[],int n){
    for(int i=n/2 - 1 ; i>=0 ; i--)
    heapify(arr,n,i);

    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main(){
int arr[]={4,3,5,1,6,7};
int n;
n=sizeof(arr)/sizeof(arr[0]);
heapsort(arr,n);
for(int i=0;i<n;i++)
cout<<arr[i]<<"\t";
return 0;
}
