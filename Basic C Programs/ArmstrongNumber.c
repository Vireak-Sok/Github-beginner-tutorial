#include<stdio.h>

main()
{
	int inp,mol,arm=0,chk;
	printf("Enter a number: ");
	scanf("%d",&inp);
	chk=inp;
	while(inp!=0)
  {
		mol=inp%10;
		mol=mol*mol*mol;
		arm+=mol;
		inp/=10;
	}
	if(chk==arm)
  {
		printf("this is armstrong...");
	}else
  {
		printf("this isn't armstrong...");
	}
}
