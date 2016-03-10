#include <stdio.h>

int main()
{
	printf("short: %d\n", sizeof(short)); 
	printf("int: %d\n", sizeof(int)); 
	printf("long: %d\n", sizeof(long)); 
	printf("long long: %d\n", sizeof(long long)); 

	printf("float: %d\n", sizeof(float)); 
	printf("double: %d\n", sizeof(double)); 
	printf("long double: %d\n", sizeof(long double)); 

	int a[10]; 
	int* b = a; 
	printf("sizeof a:%d", sizeof(a)); 
	printf("\n"); 
	printf("sizeof b:%d", sizeof(b)); 
	printf("\n"); 

	return 0; 
}
