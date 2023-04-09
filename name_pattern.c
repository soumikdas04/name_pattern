#include<stdio.h>

int main()
{
    int row,col,i,j,space;
    row=5,col=5;

	for(i=1; i<=row; i++){

        // PRINT S
    	for(j=1; j<=col; j++){
        if(i==1||i==3||(i==4 && j==5)||(i==2 && j==1)||i==5)
            printf("* ");
        else
            printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }

        //PRINT O
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==5 || j==1 || j==5)
                printf("* ");
            else
                printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }

        // PRINT U
        for(j=1;j<=col;j++)
        {
            if(j==1 || j==5 || i==5)
                printf("* ");
            else
                printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }

        // PRINT M
        for(j=1;j<=col;j++)
        {
            if(j==1 || j==5 || (i==2 && (j==2 || j==4)) || (i==3 && j==3))
                printf("* ");
            else
                printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }

        // PRINT I
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==5 || j==3)
                printf("* ");
            else
                printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }

        // PRINT K
        for(j=1;j<=col;j++)
        {
            if(j==1 || (i==2 && j==3) || (i==4 && j==3) || (i==1 && j==5) || (i==5 && j==5))
                printf("* ");
            else
                printf(" ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}
