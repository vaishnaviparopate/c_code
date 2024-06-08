Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
0 1 2 3 4 5
0 1 2 3 4
0 1 2 3
0 1 2
0 1
*/

#include<stdio.h>
int main()
{       
	int i;
	scanf("%d",&i);
	while(i>=2)
	{       int j=1;
	        int k=0;
	        while(j<=i)
	        {
		printf("%d",k);
		k=k+1;
		j=j+1;
		}
		printf("\n");
		i=i-1;
		}
		return 0;
}



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
----*
---**
--*-*
-*--*
*****
*/

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
	int j;
	for(j=1; j<=n; j++)
	{
	if((i+j)==(n+1) || j==n) printf("* ");
	else printf("  ");
	}
	printf("\n");
	}
	for(i=1; i<=1; i++)
	{int j;
	for(j=1; j<=n; j++)
	{
	printf("* ");
	}
	}
	return 0;
}

Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
*
**
*-*
*--*
*****
*/

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
	int j;
	for (j=1; j<=i; j++)
	{
	if(j==1 || i==j) printf("❤️ ");
	else printf("  "); 
        }
        printf("\n");
        }
	for(i=1; i<=1; i++)
	{int j;
	for(j=1; j<=n; j++)
	{
	printf("❤️ ");
	}
	}
	return 0;
        }



        
Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
A B C D
A B C D
A B C D
A B C D
*/

#include<stdio.h>
int main()
{       int n;
        scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{int a=1;
	for(int j=1; j<=n; j++)
	{int d=a+64;
	char ch=(char)d;
	printf("%c ",ch);
	a=a+1;
	}
	printf("\n");
	}
}



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
*---*
-*-*
--*--
-*-*
*---*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n;i++)
	{
	for(int j=1; j<=n; j++)
	{
	if(i==j || i+j==n+1) printf("*");
	else printf(" ");
	}
	printf("\n");
	}
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{for(int j=1; j<=i; j++)
	{
	if((i+j)%2==0) printf("1 ");
	else printf("0 ");
	}
	printf("\n");
	}
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
*-*-*-*-*-*-*-*-*-*
*-*-*-*-----*-*-*-*
*-*-*---------*-*-*
*-*-------------*-*
*-----------------*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k;
	int m=0;
	for (k=1; k<=n; k++)
	{
	int j;
	for(j=1; j<=n-(k-1); j++)
	{
	printf("* ");
	}
	for(j=1; j<=(m*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=n-(k-1); j++)
	{
	printf("* ");
	}m=m+2;
	printf("\n");
	}
	return 0;
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
*-*-*-*
*-----*
*-----*
*-*-*-*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,t;
	int k=2;
	for(i=1; i<=1; i++)
	{
	for(j=1; j<=n; j++)
	{
	printf("😝️ ");
	}
	printf("\n");
	}
	for(t=1; t<=n-2; t++)
	{
	for(j=1; j<=n; j++)
	{
	if(j==1 || j==n)
	{
	printf("😝️ ");
	}
	else{
	printf("   ");
	}
	}
	printf("\n");
	}
	for(j=1; j<=n; j++)
	{
	printf("😝️ ");
	}
	printf("\n");
	for(i=1; i<=n; i++)
	{
	printf("😝️\n");
	}
	return 0;
	}
	


    Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
*-----------------*
*-*-------------*-*
*-*-*---------*-*-*
*-*-*-*-----*-*-*-*
*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*
*-*-*-*-----*-*-*-*
*-*-*---------*-*-*
*-*-------------*-*
*-----------------*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int t=8;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=i; j++)
	{
	printf("* ");
	}
	for(j=1; j<=(t*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=i; j++)
	{
	printf("* ");
	}
	printf("\n");
	t=t-2;
	}
	int h=n;
	int k;
	int m=0;
	for (k=1; k<=h; k++)
	{
	int j;
	for(j=1; j<=h-(k-1); j++)
	{
	printf("* ");
	}
	for(j=1; j<=(m*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=h-(k-1); j++)
	{
	printf("* ");
	}m=m+2;
	printf("\n");
	}
	return 0;
}



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
*-----------------*
*-*-------------*-*
*-*-*---------*-*-*
*-*-*-*-----*-*-*-*
*-*-*-*-*-*-*-*-*-*
*-*-*-*-*-*-*-*-*-*
*-*-*-*-----*-*-*-*
*-*-*---------*-*-*
*-*-------------*-*
*-----------------*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int t=8;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=i; j++)
	{
	printf("* ");
	}
	for(j=1; j<=(t*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=i; j++)
	{
	printf("* ");
	}
	printf("\n");
	t=t-2;
	}
	int h=n;
	int k;
	int m=0;
	for (k=1; k<=h; k++)
	{
	int j;
	for(j=1; j<=h-(k-1); j++)
	{
	printf("* ");
	}
	for(j=1; j<=(m*2)+1; j++)
	{
	printf(" ");
	}
	for(j=1; j<=h-(k-1); j++)
	{
	printf("* ");
	}m=m+2;
	printf("\n");
	}
	return 0;
}



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
----*
---**
--***
-****
*****
-****
--***
---**
----*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("  ");
	}
	int k;
	for(k=1; k<=i; k++)
	{
	printf("* ");
	}
	printf("\n");
	}
	int t=n-1;
	int h;
	for(h=1; h<=t; h++)
	{int j;
	for(j=1; j<=h+1; j++)
	{
	printf("  ");
	}
	for(j=1; j<=t-(h-1); j++)
	{
	printf("* ");
	}
	printf("\n"); 
	}
	return 0;
}




Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
5 4 3 2 1
- 9 8 7 6
- - 12 11 10
- - - 14 13
- - - - 15
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int h=5;
	int t=0;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=t; j++)
	{
	printf("# ");
	}int k=h;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d ",k);
	k=k-1;
	}
	printf("\n");
	t=t+1;
	h=h+(n-i);
	}return 0;
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
4321
-321
--21
---1
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=0;
	int t=4;
	for(i=1;i<=n; i++)
	{
	int j;
	for(j=1; j<=k; j++)
	{
	printf("  ");
	}int h=t;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d ",h);
	h=h-1;
	}
	printf("\n");
	k=k+1;
	t=t-1;
	}
	return 0;
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
0
2 4
4 8 8
8 16 16 16
16 32 32 32 32
32 64 64 64 64 64
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("0\n");
	int i;
	int k=2;
	for(i=2; i<=n; i++)
	{
	int j;
	for(j=1; j==1; j++)
	{
	printf("%d ",k);
	}
	k=k*2;
	for(j=1; j<=i-1; j++)
	{
	printf("%d ",k);
	}
	printf("\n");	
	}
	return 0;
}




Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
45432
34543
23454
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=4;
	int t=1;
	for(i=1; i<=n; i++)
	{
	int  j;
	int m=k;
        for(j=1; j<=t+i; j++)
	{
	printf("%d",m);
	m=m+1;
	}
	int l=n+1;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d",l);
	l=l-1;
	}
	k=k-1;
	printf("\n");
	}
	return 0;
}

/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int k=4;
	while(i<=n)
	{
	int j=1;
	int m=k;
	while(j<=n+2)
	{if(j<=(n+1))
	{
	printf("%d",m);
	m=m+1;
	j=j+1;
	}
	printf("%d",m);
	m=m-1;
	j=j+1;
	}
	printf("\n");
	k=k-1;
	i=i+1;
	}return 0;
}
*/



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
-----1
---101
--1001
-10001
100001
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=2*n+2; i++)
	{
	printf(" ");
	}
	printf("1\n");
	int k=n;
	for(i=1; i<=n; i++)
	{	
	int j;
	for(j=1; j<=k+2; j++)
	{
	printf(" ");
	}
	printf("1 ");
	for(j=1; j<=i; j++)
	{
	printf("0 ");
	}
	k=k-2;
	printf("1");
	printf("\n");
        }
        return 0;
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
1-2-3-4-5
-1-2-3-4
--1-2-3
---1-2
----1
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<i;j++)
	{
	printf(" ");
	}
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d ",j);
	}printf("\n");
	}return 0;
}


Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
----*
---*-*
--*-*-*
-*-*-*-*
*-*-*-*-*
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k;
	for(i=1; i<=n; i++)
	{
	int j;
	for(j=1; j<=(n-i); j++)
	{printf(" ");
	}
	for(k=1; k<=i; k++)
	{
	printf("* ");
	}
	printf("\n");
	}
	return 0;
}



Storage low … 5% left of your 30 GB individual storage. To prevent interruptions, free up space or talk to your administrator.
/*
1 2 3 4 5
10 9 8 7 6
20 19 18 17 16
21 22 23 24 25
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		int j=1;
		int k=1;
		while(j<=n)
		{
			if(i%2==0)
			{
				printf("%d ",k);
				k=k-1;
				j=j+1;
			}
			else{
			printf("%d ",k);
			k=k+1;
			j=j+1;
			}
		}
	         printf("\n");
	         i=i+1;
	         k=k+(i*i);
	         
		}return 0;
}















