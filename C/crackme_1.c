/*
	Coded By : shellcodesniper@gmail.com
	Simple Input With scanf and if ==
*/
#include <stdio.h>

int main(int argc, char **argv) {
	char input[30];
	char password[30] = "password";
	printf("Input Password : ");
	scanf("%s",input);
	if(input == password)
	{
		printf("Success!\n");
	}
	else
	{
		printf("EEEEERRROOOROORRORORRR..\n");
	}
	return 0;


}