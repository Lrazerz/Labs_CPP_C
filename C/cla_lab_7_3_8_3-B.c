#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[])
{
	const int MAX_ATTEMPTS = 3;
	int i = 0;
	FILE *orig, *copy = NULL;
	char buffer[1000], filename[256], cur;
	if ((orig = fopen("main.c", "r")) == NULL)
	{
		printf("Error opening a file.");
		return 1;
	}
	do
		sprintf(filename, "main_copy_%d.txt", i);
	while (i++ < MAX_ATTEMPTS && !(copy = fopen(filename, "wx")));
	if (copy == NULL)
	{
		puts("File count limit reached.\n");
		return 2;
	}
	for (i = 0; fgets(buffer, 1000, orig) != NULL; ++i)
		 fputs(buffer, copy);
	puts("Copying finished.");
	fclose(orig);
	fclose(copy);
	return 0;
}