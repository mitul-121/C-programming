#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    printf("Enter the number of vertex: ");
    scanf("%d", &a);

    int vertex[a][a-1];
    int dist[a][a-1];
    int nu[a-1];


    for(int i=1; i<a+1;i++){

        printf("Enter the number of connected vertexes with %d: ",i);
        scanf("%d",&nu[i]);

        printf("\nEnter the connected vertexes: \n");

        for(int j =1; j<nu[i]+1; j++)
        {
            scanf("%d", &vertex[i][j]);

        }
    }




    for(int i=1; i<a+1;i++){

        printf("\nEnter the distant  vertexes: \n");

        for(int j =1; j<nu[i]+1; j++)
        {
            scanf("%d", &dist[i][j]);

        }
    }
     printf("\n\n-------------------------------------\n");
    printf("vertex\n");
    for(int i = 1; i < a+1; ++i)
    {
     printf("%d   |",i);
     for(int j = 1; j < nu[i]+1; ++j)
     {


          printf(" %d |", vertex[i][j]);

     }
     printf("\n----------------------------\n");
    }

    printf("\n\n-------------------------------------\n");
    printf("distance\n");
    for(int i = 1; i < a+1; ++i)
    {
     printf("%d   |",i);
     for(int j = 1; j < nu[i]+1; ++j)
     {


          printf(" %d |", dist[i][j]);

     }
     printf("\n----------------------------\n");
    }









}
