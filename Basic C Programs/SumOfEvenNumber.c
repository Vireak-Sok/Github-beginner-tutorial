This program is used to do addition of even numbers in range that you give to "n".
``
#include<stdio.h>

main()
{
	
	int count,n,sum=0;
	printf("Enter the value for n: ");
	scanf("%d" ,&n);
	for(count=1;count<=n;count++)
	{
		if(count%2==1)
		{
			continue;
		}
			sum+=count;
	}
	printf("The sum of even number is %d" ,sum);
}
``
