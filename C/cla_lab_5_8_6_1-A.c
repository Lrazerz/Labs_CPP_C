#include <stdio.h>
#include <string.h>
struct People_s
{
	char human1[60];
	char human2[60];
	char human3[60];
	char human4[60];
};

int main()
{
	struct People_s people;

	strcpy(people.human1, "Mary Smith");
	strcpy(people.human2, "James Johnson");
	strcpy(people.human3, "Patricia Williams");
	strcpy(people.human4, "John Brown");

	printf("%s\n", people.human1);
	printf("%s\n", people.human2);
	printf("%s\n", people.human3);
	printf("%s\n", people.human4);

	return 0;
}
