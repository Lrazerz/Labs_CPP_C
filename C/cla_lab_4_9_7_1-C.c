#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
	// last[0] - Last 3
	// last[1] - Last 2
	// last[2] - Lsat 1
	char in[100] = { 0 }, last[3][12] = { 0 };
	scanf("%s", in);
	int n = strlen(in), dotCount = 0, curPartDigits = 0,
		lastIdx[3] = { 0 };
	bool good = true;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
			if (dotCount > j)
				last[j][lastIdx[j]++] = in[i];
		if (in[i] == '.')
		{
			if (curPartDigits == 0)
			{
				good = false;
				break;
			}
			if ((++dotCount) == 4)
				break;
			curPartDigits = 0;
			continue;
		}
		else if (!isdigit(in[i]) || (++curPartDigits) == 4)
		{
			good = false;
			break;
		}
	}
	if (dotCount != 3 || curPartDigits == 0)
		good = false;
	if (!good)
		printf("Error: not a valid address.\n");
	else
	{
		printf("Last 3 parts: %s\n", last[0]);
		printf("Last 2 parts: %s\n", last[1]);
		printf("Last 1 part: %s\n", last[2]);
	}
	return 0;
}