#include<iostream>
using namespace std;
void merge(int *arr,int l,int m,int r);
void mergesort(int *arr , int l,int r);
int main()
{
  int array[7]={1,3,4,6,5,2,7};
  int i;
  for(i=0;i<7;i++)
  {
    cout<<array[i]<< " " ;
  }
  cout<<endl;
  mergesort(array,0,6);
  for(i=0;i<7;i++)
  {
    cout<<array[i]<< " " ;
  }
  cout<<endl;
  system("pause");
}
void merge(int *arr,int l,int m,int r)
{
  int i,j,k;
  int n1=(m-l)+1;
  int n2=r-m;
  int arr1[n1];
  int arr2[n2];
  for(i=0;i<n1;i++)
  {
    arr1[i]=arr[l+i];
  }
  for(j=0;j<n2;j++)
  {
    arr2[j]=arr[m+1+j];
  }
   i=0,j=0,k=l;
   while (i < n1 && j < n2) 
    { 
        if (arr1[i] <= arr2[j]) 
        { 
            arr[k] =  arr1[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = arr2[j]; 
            j++; 
        } 
        k++; 
    } 

     while (i < n1) 
    { 
        arr[k] = arr1[i]; 
        i++; 
        k++; 
    } 
     while (j < n2) 
    { 
        arr[k] = arr2[j]; 
        j++; 
        k++; 
    }
}

void mergesort(int *arr , int l,int r)
{
  if(l<r)
  {
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
  }
}
int binarysearch(int *arr,int value)
{
  
}