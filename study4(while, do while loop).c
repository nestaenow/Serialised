#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, j = 0, n;
	puts("Enter a value representing your upper bound: ");
	scanf("%d", &n);
	printf("Your values are, from 0 to %d\n", n);
	//counting numbers from 0 to n
	
	//while loop version
	while(i <= n){
		printf("%d\n", i);
		i++;
	}
	
	//do while version
  /*do
	{
		printf("%d\n", i);
		i++;
	}while(i <= n);*/
	
	//counting numbers from n to 0
	
	//while loop version
	printf("Your values are, from %d to 0\n", n);
	j=n;
	while(j <= n && j >= 0){
		printf("%d\n", j);
		j--;
	}
	
	//do while version
  /*do
	{
		printf("%d\n", j);
		j--;
	}while(j <= n && j >= 0);*/
	return 0;
}
