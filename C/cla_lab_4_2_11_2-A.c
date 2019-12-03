#include <stdio.h>

int main()
{
    char chars[26];
    for (char c = 'a'; c <= 'z'; ++c)
        chars[c - 'a'] = c;
    for(int i = 25; i >= 0; --i)
        printf("%c\n", chars[i]);
	printf("%c%c%c%c%c\n",
	    chars['g' - 'a'],
	    chars['r' - 'a'],
	    chars['e' - 'a'],
	    chars['a' - 'a'],
	    chars['t' - 'a']);
	return 0;
}