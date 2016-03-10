#include <stdio.h>
#include <time.h>

int main()
{
	char a[100]; 
	time_t now; 

	time(&now); 
	//now = time(NULL); 
	printf("%s", ctime(&now)); 

	strftime(a, 100, "%d-%m-%Y", localtime(&now)); 
	printf("%s\n", a); 

	return 0; 
}
