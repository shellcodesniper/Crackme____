/*
	Coded By : shellcodesniper@gmail.com
	Simple Input With scanf and if ==
*/
#include <stdio.h>

int main(int argc, char **argv) {
	char input[30];
	char password[30] = "password";
	int i;

	printf("Input Password : ");
	scanf("%s",input);

	for(i=0;i<30;i++){
		if(input[i] != '\0' && password[i] != '\0' && input[i] != password[i]){
			printf("EEEEERRROOOROORRORORRR..\n");
			return 0;
		}
	}
	printf("Success!\n");
	return 0;


}
