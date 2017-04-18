#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
}

int norep()
{
    int i,j;
    do
    {
        int x,y=1,z;
        int vetor[6];
        for(x=y;x>0;x--)
        {
            i=rand()%6+1;
            if(i==vetor[x])
                break;
            else
            {
                vetor[x]=i;
                y++;
            }
        }
    }while(y<6);
    return vetor[x];
}
