Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
//Find and print all Armstrong numbers within a given range.
#include<stdio.h>
#include<math.h>

int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
	int b=i,c=0;
	while(b>0)
        {
        c=c+1;
        b=b/10;
        }
        int a=i,r,sum=0;
        while(a>0)
        {
        r=a%10;
        sum=sum+pow(r,c);
        a=a/10;
        }
        if(sum==i)
        {
        printf("%d ",i);
        }
        i=i+1;
        }
        
	return 0;
}



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
//Prime Factorization
/*
#include<stdio.h>
int main()
{
	int n;
	printf("enetr the number:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
	while(n%i==0)
	{
	
	for(int j=1; j<=i;j++)
	{
	while(i%j==0)
	{
	int c=0;
	for(int k=1; k<=j; k++)
	{
	if(j%k==0)
	{
	c=c+1;
	}
	}
	if(c==2)
	{
	printf("i=%d ",j);
	}
	}
	}
	}
	}
	return 0;
}
*/



#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
	if(n%i==0)
	{
	int j=1;
         while(j<=i)
	{
	if(i%j==0)
	{
	int k=1,c=0;
	while(k<=j)
	{
	if(j%k==0)
	{
	c=c+1;
	}
	k=k+1;
	}

	if(c==2)
	{
	printf("%d ",j);
	j=j+1;
	}
	else
	{
	j=j+1;
	}
	}
	else{
	j=j+1;
	}
	}
	i=i+1;
	}

	i=i+1;
	
	}
	return 0;
	}
	/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i = 2;  // Start from 2, as 1 is not a prime number
    
    while (n > 1) {  // Continue until n becomes 1
        while (n % i == 0) {  // Check if i is a factor of n
            printf("%d ", i);
            n = n / i;  // Divide n by i to reduce it
        }
        i++;
    }
    
    return 0;
}*/




Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
//palindrome
#include<stdio.h>
int main()
{
	int n,r,i=10;
	scanf("%d",&n);
	while(i<=n)
	{int j=i;
	int sum=0;
	while(j>0)
	{
	r=j%10;
	sum=sum*10+r;
	j=j/10;
	}
	if(sum==i)
	{
	printf("%d ",i);
	}
	i=i+1;
	}
	return 0;
	

}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*Prime Number Sum
Description: Calculate and print the sum of the first 'n' prime numbers.
Question: Write a Python program that reads a positive integer 'n', and calculates and
prints the sum of the first 'n' prime numbers.
*/
#include<stdio.h>
int main()
{
	int n;
	int sum=0,c1=0,i=1;
	printf("enetr the number:");
	scanf("%d",&n);
	while(c1<n)
	{
	int c=0;
	for(int j=1; j<=i; j++)
	{
	if(i%j==0)
	{
	c=c+1;
	}
	}
	if(c==2)
	{
	sum=sum+i;
	c1=c1+1;
	}
	i=i+1;
	}
	printf("%d",sum);
	return 0;
	
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*Prime Palindrome Find and print the largest prime palindrome smaller than a given positive
integer.*/
#include<stdio.h>
int main()
{
	int n,i=10,max=0;
	scanf("%d",&n);
	while(i<=n)
	{
	int m=i,r,sum=0;
	while(m>0)
	{
	r=m%10;
	sum=sum*10+r;
	m=m/10;
	}
	
	if(sum==i)
	{int c=0,j=1;
	while(j<=i)
	{
	if(i%j==0)
	{
	c=c+1;
	}
	j=j+1;
	}
	if(c==2)
	{
        if(max<i)
        {
        max=i;
	}
	}
	}
	i=i+1;
	}
	printf("max=%d",max);
	
	
	return 0;
}



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
//Perfect Square 
#include<stdio.h>
int main()

{
	int n,p=1,sum=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
	p=i*i;
	sum=sum+p;
	}
	printf("%d",sum);
	return 0;
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
//array intersection
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	int arr1[m];
	for(int j=0; j<m; j++)
	{
	scanf("%d",&arr1[j]);
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	for(int j=0; j<m; j++)
	{
	printf("%d ",arr1[j]);
	}
	printf("\n");
	int b[n];
	int p=0;
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	if(arr[i]==arr1[j])
	{
	b[p]=arr[i];
	p=p+1;
	}
	}
	}
	for(int i=0; i<p; i++)
	{
	printf("array intersection=%d ",b[i]);
	}
	return 0;
}