#include<iostream>
#include<stdlib.h>

using namespace std;
int merge_sort(int *a,int *temp, int start,int end);
int merge(int *a,int *temp,int start,int mid,int end);
int main()
{
    int n;
    cout<< "Enter the size of array:";
    cin>>n;
    int *a=new int[n];
    int *temp=new int[n];
    cout<< "Enter the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int inv=merge_sort(a,temp,0,n-1);
    cout<<"\nSorted Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\nInversion Count: "<<inv<<"\n";
}


int merge_sort(int *a,int *temp,int start,int end)
{
    int invcount=0;
    if(start<end)
    {
        int mid=(start+end)/2;
        invcount=merge_sort(a,temp,start,mid);
        invcount+=merge_sort(a,temp,mid+1,end);
        invcount+=merge(a,temp,start,mid,end);
    }
    return invcount;
}

int merge(int *a,int *temp,int start,int mid,int end)
{
    int i=start,j=mid+1,l=start;
    int inv_count=0;
    while(i<=mid&&j<=end)
    {
        if(a[i]>a[j])
        {
            temp[l++]=a[j++];
            inv_count+=(mid-i+1);
        }
        else
        {
            temp[l++]=a[i++];
        }
    }
    while(i<=mid)
    {
      temp[l++]=a[i++];
    }
    while(j<=end)
    {
        temp[l++]=a[j++];
    }
    cout<<"\nStart:" <<a[start]<<" End: "<<a[end] <<"\n";
     for(int i=start;i<=end;i++)
    {
        cout<<temp[i]<<"\t";
        a[i]=temp[i];
    }
        return inv_count;


}