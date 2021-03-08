#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, n;
	puts("Enter a value representing your upper bound: ");
	scanf("%d", &n);
	printf("Your values are, from 0 to %d\n", n);
	
	//counting numbers from 0 to n
	
	for(i = 0; i <= n; i++){
		printf("%d\n", i);
	}
	
	printf("Your values are, from %d to 0\n", n);
	
	//counting numbers from n to 0
	
	for(j = n; j >= 0; j--){
		printf("%d\n", j);
	}
	return 0;
}
