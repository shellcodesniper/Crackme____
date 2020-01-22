/*
	Coded By : shellcodesniper@gmail.com
	Simple Input With scanf strcmp
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char input[30];
	char *password = "password";
	printf("Input Password : ");
	scanf("%s", input);
	if (!(strcmp(input,password)))
	{
		printf("Success!\n");
	}
	else
	{
		printf("EEEEERRROOOROORRORORRR..\n");
	}
	return 0;
}