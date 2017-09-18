#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char cmd[128];
    while(1)
    {
        scanf("%s",cmd);
	if(strcmp(cmd,"help") == 0)
	{
		printf("This is help cmd!\n");
	}
	else if(strcmp(cmd,"quit") == 0)
	{
		exit(0);
	}
	else if(strcmp(cmd,"file") == 0)
        {
                printf("This is file cmd!\n");
        }
	else if(strcmp(cmd,"edit") == 0)
        {
                printf("This is edit cmd!\n");
        }
	else if(strcmp(cmd,"view") == 0)
        {
                printf("This is view cmd!\n");
        }
	else if(strcmp(cmd,"navigate") == 0)
        {
                printf("This is navigate cmd!\n");
        }
	else if(strcmp(cmd,"code") == 0)
        {
                printf("This is code cmd!\n");
        }
	else if(strcmp(cmd,"refactor") == 0)
        {
                printf("This is refactor cmd!\n");
        }
	else
	{
		printf("Wrong cmd!\n");
	}
    }
}
