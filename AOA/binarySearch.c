#include<stdio.h>

int binarySearch(int arr[],int x, int low, int high)
{
    int mid;
    if(high>=low)
    {
        mid=low+(high-low)/2;
    
    if(x==arr[mid])
    {
        return mid;
    }

    if(x>arr[mid])
    {
        return binarySearch(arr,x,mid+1,high);
    }

    return binarySearch(arr,x,low,mid-1);
    }
    return -1;
}
void main()
{
    int arr[]={2,5,8,9,10,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    int result = binarySearch(arr,x,0,n-1);
    if(result==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position %d ",result);
    }

}


