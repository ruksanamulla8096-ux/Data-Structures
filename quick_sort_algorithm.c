#include<stdio.h>
void swap(int a[],int low,int high){
	int temp = a[low];
	    a[low] = a[high];
	    a[high] = temp;
}
int partiton(int a[],int low,int high)
    int i=low,j=high,pivot=a[low];
    whil(i<=j){
    	while(a[i]<=pivot){
    		i++;
       }
	    while(a[j]>pivot){
	    	j--;
	    }
	    if(i<j){
	    swap(a,i,j);
       }
    }
    swap(a,low,j);
    return j;
    void quickSort(int a[],int low,int high){
    	if(low<high){
    		int pos = partition(a,low,high);
    		quickSort(a,low,pos-1);
    		quickSort(a,pos+1,high);
       }
    }
int main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n,i++)
	{
		scanf("%d",&a[i]);
	}
	quickSort(a,0,q-1)
	
}