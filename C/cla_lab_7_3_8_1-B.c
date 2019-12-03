#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *orig, *copy;
	char buffer[1000];
	if ((orig = fopen("main.c", "r")) == NULL)
	{
		printf("Error opening a file.");
		return 1;
	}
	if ((copy = fopen("main_copy.txt", "w")) == NULL)
	{
		printf("Error opening a file.");
		return 2;
	}
	for (int i = 0; fgets(buffer, 1000, orig) != NULL; ++i)
	    fprintf(copy, "%d: %s", i, buffer);
	fclose(orig);
	fclose(copy);
	return 0;
}