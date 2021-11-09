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
}

#include <stdio.h>
int main(int argc, char const *argv[])
{

    int T, N, L, X, res;
    printf("enter the value of t:");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        printf("Enter the value of n,l,x\n");
        scanf("%d %d %d", &N, &L, &X);
        if (N - L > L)
        {

            res = L * X;
            printf("%d\n", res);
        }
        else
        {
            int pes = (N - L) * X;
            printf("%d\n", pes);
        }
    }

    return 0;
}

// Faizal walks 3 steps forward in the 1st second, ending up at 3
// Faizal walks 1 step backward in the 2nd second, ending up at 2
// Faizal walks 3 steps forward in the 3rd second, ending up at 5
// Faizal walks 1 step backward in the 4th second, ending up at 4
// Faizal walks 3 steps forward in the 5th second, ending up at 7


#include <stdio.h>
int main()
{
    int x, T; // 5
    int move = 0;
    // printf("Enter the test\n");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int move = 0;
        // printf("Enter the seconds\n");
        scanf("%d", &x); // 5
        for (int i = 1; i <= x; i++)
        {
            if (i % 2 == 0)
            {
                move = move - 1;
                // printf("Faizal Walk 3 steps in the %d second,ending up at %d\n", i, move);
            }
            else
            {
                move = move + 3;
                // printf("Faizal Walk 3 steps in the %d second,ending up at %d\n", i, move);
            }
        }
        printf("%d",move);
    }
}*/
// Initially, the price of petrol is 2 rupee and the price of diesel is 2 rupee. Since A=1 and B=1, the price of petrol increases by 1 rupee and the price of diesel increases by 1 rupee at the start of every month. It follows that at the start of the first month, the price of petrol becomes 2+1=3 rupees and the price of diesel becomes 2+1=3 rupees. And by the start of the second month, the price of petrol becomes 3+1=4 rupees and the price of diesel becomes 3+1=4 rupees. By the end of the second month, the prices of petrol and diesel are both 4 rupees and hence both have the same prices.
// 3
// 1 1 1 1 1
// 2 1 2 1 2
// 2 2 1 1 2
// SAME PRICE
// DIESEL
// SAME PRICE
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int X, Y, A, B, K, T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {

        scanf("%d %d %d %d %d", &X, &Y, &A, &B, &K);
        for (int i = 1; i <= K; i++)
        {
            X += A;
            Y += B;
        }
        printf("%d\n", X);
        printf("%d\n", Y);
        if (X < Y)
        {
            printf("PETROL\n");
        }
        else if(X>Y)
        {
            printf("DIESEL\n");
        }
        else{
            printf("SAME PRICE\n");
        }
    }
    return 0;
}*/

