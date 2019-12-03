#include <stdio.h>
int getValue(int paramA, float paramB)
{
int result = 0;
if (paramA>10)
{
result += 2;
}
else
{
result += 1;
}
if (paramB>5.5)
{
result += 4;
}
else
{
result += 3;
}
return result;
}
int getOneOrTwo(int param)
{
if(param > 5)
return 2;
return 1;
}
int main(void)
{
int fiveValue ; /* your code */
fiveValue = getValue(1, 6);
int sixValue ; /* your code */
sixValue = getValue(11, 6);
int sevenValue ; /* your code */
sevenValue = getValue(11, 6) + getOneOrTwo(3);
int eightValue ; /* your code */
eightValue = getValue(11, 6) + getOneOrTwo(6);
int nineValue ; /* your code */
nineValue = getValue(11, 6) + getOneOrTwo(6) + getOneOrTwo(3);
printf("Five: %d\n", fiveValue);
printf("Six: %d\n", sixValue);
printf("Seven: %d\n", sevenValue);
printf("Eight: %d\n", eightValue);
printf("Nine: %d\n", nineValue);
return 0;
}
