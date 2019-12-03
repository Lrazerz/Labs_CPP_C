#include <stdio.h>
#include <stdlib.h>
int main()
{
	int size;

	scanf("%d", &size);
	if (size > 20 || size <= 0)
	{
	    printf("Matrix too big.");
	    return 0;
	}
    //allocate
    int **matx = (int**)malloc(sizeof(int*) * size);
    for(int i = 0; i < size; i++)
        matx[i] = (int*)malloc(sizeof(int) * size);
    //set
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matx[i][j] = (j+1) * (i+1);
            
    //print    
    printf("    ");
    for(int i = 1; i <= size; i++)
        printf("%4d", i);
    printf("\n");
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(j == 0)
                printf("%4d", i+1);
            printf("%4d", matx[i][j]);
        }
    printf("\n");   
    }
    //delete
    for(int i = 0; i < size; i++)
        free(matx[i]);
    free(matx);
	return 0;
}
