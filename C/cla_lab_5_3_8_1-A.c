#include <stdio.h>
int main()
{
	char desk[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i == 0 || i == 7)
			{
				switch (j)
				{
				case 0: case 7:
					desk[i][j] = 'R';
					break;
				case 1: case 6:
					desk[i][j] = 'N';
					break;
				case 2: case 5:
					desk[i][j] = 'B';
					break;
				case 3:
					desk[i][j] = 'Q';
					break;
				case 4:
					desk[i][j] = 'K';
					break;
				}
			}
			else if (i == 1 || i == 6)
				desk[i][j] = 'P';
			else
				desk[i][j] = ' ';
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
			printf("%c", desk[i][j]);
		printf("\n");
	}

	return 0;
}
