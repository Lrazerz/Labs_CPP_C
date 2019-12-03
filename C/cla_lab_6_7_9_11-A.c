#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if (argc != 4)
		return 0;

	char *operation = argv[1];
	int x = atoi(argv[2]);
	int	y = atoi(argv[3]);

	if (!strcmp(operation, "add"))
		printf("add %d %d: %d", x, y, x + y);
	else if (!strcmp(operation, "sub"))
		printf("sub %d %d: %d", x, y, x - y);
	else if (!strcmp(operation, "mul"))
		printf("mul %d %d: %d", x, y, x * y);
	else
		printf("Wrong parameters");

	return 0;

}
