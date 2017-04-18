#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *norep();

int main(void)
{
    srand(time(NULL));
    int a=0,b=0;
    for(b=0;b<100;b++)
    {
        int *rep=norep();
        for(a=0;a<6;a++)
            printf("%d", rep[a]);
        printf("\n");
    }
    return EXIT_SUCCESS;
}

int *norep()
{
    int i,j=0;
    int *vetor=(int *) calloc (6, sizeof (int));
    do
    {
        int x,y=1;
        i=rand()%6+1;
        for(x=0;x<6;x++)
        {
            if(i==vetor[x])
            {
                y=0;
                break;
            }

        }
        if(y==1)
        {
            vetor[j]=i;
            j++;        
        }
    }while(j<6);
    return vetor;
}
