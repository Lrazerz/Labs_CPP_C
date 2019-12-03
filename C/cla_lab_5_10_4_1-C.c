#include <stdio.h>
#include <stdlib.h>

struct element
{
	int value;
	struct element *next;
};

int main(void)
{
	int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0 };

	struct element *elem = (struct element*)malloc(sizeof(struct element));
	elem->value = values[0];
	struct element  *first_elem = elem;
	for (int i = 1; i < 10; i++)
	{
		struct element  *tmp_elem = (struct element*)malloc(sizeof(struct element));
		tmp_elem->value = values[i];
		tmp_elem->next = NULL;

		elem->next = tmp_elem;
		elem = elem->next;
	}
	elem = first_elem;
	printf("First 5 values\n");
	for (int i = 0; i < 5; i++)
	{
		if (elem == NULL)//save
			break;

		printf("%d\n", elem->value);
		elem = elem->next;
	}
	elem = first_elem;
	printf("First 7 values\n");
	for (int i = 0; i < 7; i++)
	{
		if (elem == NULL)//save
			break;

		printf("%d\n", elem->value);
		elem = elem->next;
	}

	elem = first_elem;
	while (elem != NULL)
	{
		struct element  *next_elem = elem->next;
		free(elem);
		elem = next_elem;
	}
	printf("Memory is freed\n");
	return 0;
}