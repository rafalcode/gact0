#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc!=2) {
		printf("Error. Pls supply one integer argument.\n");
		exit(EXIT_FAILURE);
	}
    int n=atoi(argv[1]);

   printf("You gave in number %ii as an argument.\n", n);

   return 0;
}
