#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[])
{
		int i, j, chars[256] = {0}, overall = 0;
		FILE* orig;
		char buffer[1000], cur;
		if ((orig = fopen("main.c", "r")) == NULL)
		{
			printf("Error opening a file.");
			return 1;
		}
		for (i = 0; fgets(buffer, 1000, orig) != NULL; ++i)
			for (j = 0; (cur = buffer[j]) != '\0'; ++j)
				++chars[cur], ++overall;
		printf("Lines: %d\n", i);
		printf("Whitespaces: %d\n", chars[' ']);
		printf("Characters: %d\n", overall);
		for (cur = 'a'; cur <= 'z'; ++cur)
			printf("Small letter: %c : %d\n", cur, chars[cur]);
		fclose(orig);
		return 0;
}