#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFF_SIZE 1024
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        char buff[BUFF_SIZE];
	int stat;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		if (fgets(buff, BUFF_SIZE, stdin) == NULL)
		{
			break;
		}
		if ((stat = system(buff)) < 0)
		{
			fprintf(stderr, "Error executing command\n");
			exit(1);
		}
	}
	return (0);
}
