#include <stdio.h>

int main()
{
	char in[8]; 
	char pw[8] = "pass"; 

	while (1) {
		scanf("%s", in); 
		if (strcmp(in, pw) == 0) {
			printf("yes\n"); 
			break; 
		} else {
			printf("no\n"); 
		}
	}

	return 0; 
}
