#include <stdio.h>
int stringCompare(char *string1, char *string2)
{
int pos;
for (pos=0 ; string1[pos] != 0 && string2[pos] != 0 ; ++pos)
{
if(string1[pos]>string2[pos])
{
return 1;
}
else if (string1[pos]<string2[pos])
{
return -1;
}
}
if (string1[pos] == 0)
{
if (string2[pos] == 0)
return 0;
else
return -1;
}
else
return 1;
}
int main(void)
{
int result1 = stringCompare("AAA", "BBB");
int result2 = stringCompare("AAC", "AAB");
int result3 = stringCompare("AAC", "AAC");
int result4 = stringCompare("AAC", "AACC");
printf("result1: %d\n", result1);
printf("result2: %d\n", result2);
printf("result3: %d\n", result3);
printf("result4: %d\n", result4);
return 0;
}
