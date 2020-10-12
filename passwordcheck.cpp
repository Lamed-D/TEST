#include <stdio.h>
#include <windows.h>

char password[] = "Dhhd";

int check_password()
{
	char buffer[5];
	int flag = 0;
	printf("password:");
	gets(buffer);
	if (strcmp(buffer, password) == 0) flag = 1;
	return flag;
}

int main(int argc, char* argv[])
{
	if (check_password())
	{
		printf("\n=====================");
		printf("\n       Corret        ");
		printf("\n=====================");
	}
	else
	{
		printf("\n      UnCorret       ");
	}
	system("pause");
	return 0;
}
