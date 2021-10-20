/*#include<stdio.h>
int main()
{
    printf("Hello world");
}

#include <stdio.h>
int main()
{
    int T, A, B, C, D;
    printf("Enter The Value Of  T\n");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {

        printf("Enter The Value OF A,B,C,D\n");
        scanf("%d %d %d %d", &A, &B, &C, &D);
        if (A + B + C <= D)
        {
            printf("1\n");
        }
        else if (A + B <= D || A + C <= D || B + C <= D)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
}


#include<stdio.h>
int main()
{
    int T,A,B;
    printf("Enter The Value Of T\n");
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
       printf("Enter The Value OF A, B\n");
       scanf("%d %d",&A,&B);
       if (A == 0)
       {
           printf("Liquid\n");
       }
       else if (B == 0)
       {
           printf("Solid\n");
       }
       else {
           printf("Solution\n");
       }
       
       
    }
    
}

#include <stdio.h>
int main()
{
    int T, N, X, Y;
    printf("Enter The Value Of T\n");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        printf("Enter The Value Of N,X,Y\n");
        scanf("%d %d %d", &N,&X,&Y);
        if ((N+1)*Y < X)
        {
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
        
    }
}

#include<stdio.h>
int main()
{
    int T,A,B,C;
    printf("Enter the Value Of T\n");
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        printf("Enter The Value Of A,B,C\n");
        scanf("%d %d %d",&A,&B,&C);
        if (A == 7 || B == 7 || C == 7)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
    }
    
}

#include <stdio.h>
int main()
{
    int T,R1,R2,R3,R4,R5;
    int arr[5];
    printf("Enter the Value Of T\n");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int Draw = 0, India = 0, England = 0;
        printf("Enter The Value Of R1,R2,R3,R4,R5\n");
        // scanf("%d %d %d %d %d",&R1,&R2,&R3,&R4,&R5);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[j]);
        }
        
        for (int j = 0; j < 5; j++)
        {

            if (arr[j] == 0)
            {
                // printf("Draw\n");
                Draw++;
            }
            else if (arr[j] == 1)
            {
                // printf("India\n");
                India++;
            }
            else if (arr[j] == 2)
            {
                // printf("England\n");
                England++;
            }
            else{
                printf("Error\n");
            }
        }
        printf("Draw:%d\n", Draw);
        printf("India Wins:%d\n", India);
        printf("England Wins:%d\n", England);
        if (India == England)
        {
            printf("Series Will be Draw\n");
        }
        else if (India > England)
        {
            printf("India Wins The Series\n");
        }
        // else if (England > India || England > Draw)
        // {
        //     printf("England\n");
        // }
        else
        {
            printf("__________________________\n");
            printf("England Wins The Series\n");
        }
    }
}


#include<stdio.h>
int main()
{
    int T,N,X,P;
    printf("Enter The No. Of Test Cases\n");
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        printf("Enter The No. Of question, Correct Ans And passing marks\n");
        scanf("%d %d %d",&N,&X,&P);
        int total = X*3;
        int min = (N-X)*1;
        int tmarks = total - min;
        // printf("%d\n",total);
        // printf("%d\n",min);
        // printf("%d\n",tmarks);
        if(tmarks >= P)
        {
            printf("Pass\n");
        }
        else{
            printf("Fail\n");
        }
    }
}*/

