Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
//bubble sort
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<n-i-1; j++)
	{
	if(arr[j]>arr[j+1])
	{
	/*int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;*/
	arr[j]=arr[j]+arr[j+1];
	arr[j+1]=arr[j]-arr[j+1];
	arr[j]=arr[j]-arr[j+1];
	}
	}
	}
	for(int i=0; i<n; i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
	
}




Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
//bubble sort
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<n-i-1; j++)
	{
	if(arr[j]>arr[j+1])
	{
	/*int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;*/
	arr[j]=arr[j]+arr[j+1];
	arr[j+1]=arr[j]-arr[j+1];
	arr[j]=arr[j]-arr[j+1];
	}
	}
	}
	for(int i=0; i<n; i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
	
}

Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
#include<stdio.h>
int main()
{
	int n,b;
	scanf("%d %d",&n,&b);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	
	}
	int l=0;
	int h=n;
	
	
	while (l<=h)
	{
	int mid=(l+h)/2;
	//int c=mid;
	if (arr[mid]==b)
	{
	printf("%d",b);
	break;
	}
	if(arr[mid] < b)
	
	{
	l=mid+1;
	}
	else
	{
	h=mid-1;
	}
	printf("not");
	break;
	}
	

	return 0;
}
*/

#include <stdio.h>
#include<math.h>
int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int l = 0;
    int h = n - 1; // Fix 1: Initialize 'h' to 'n - 1' instead of 'n'.
    //int squaretRoot;
    while (l <= h) {
        int mid = (l + h) / 2;
        
        if (arr[mid] == b) {
            printf("%d found at index %d\n", b, mid);
            double squareRoot= sqrt(b);
           printf("Square root of %d is %f\n", b, squareRoot); 
            break;
        }
        
        if (arr[mid] < b) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    // Fix 2: The "not" message should be outside the loop and only displayed if the element is not found.
    if (l > h) {
        printf("%d not found in the array", b);
    }

    return 0;
}
