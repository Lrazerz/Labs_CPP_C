#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int siz;

    scanf("%d", &siz);

    if (siz>1024*1024 || siz < 0)
    {
        printf("Too much memory requested\n");
        return 0;
    }
    char *mem = (char*)malloc(sizeof(char) * siz);
    char ch = 'A';
    for(int i = 0; i < siz; i++)
    {
        mem[i] = ch;
        if(ch == 'Z')
            ch = 'A';
        else
            ch++;
    }
    
    char *p = mem;
    for (int i=0; i<siz; i++)
    {
        if (i >= 400)
            break;

        if(i % 40 == 0 && i != 0)
            printf("\n");

        printf("%c", *p);
        p++;
    }
    free(mem);
    return 0;

}
