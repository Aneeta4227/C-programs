#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2;
    printf("Enter the order of the first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the order of the second matrix\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
        printf("Multiplication not possible");
    else
        {
            int ar1[r1][c1],ar2[r2][c2],ar3[r1][c2],s=0;
            printf("Enter the elements in the first matrix:\n");
            for(i=0;i<r1;i++)
                for(j=0;j<c1;j++)
                    scanf("%d",&ar1[i][j]);
            printf("Enter the elements in the second matrix:\n");
            for(i=0;i<r2;i++)
                for(j=0;j<c2;j++)
                    scanf("%d",&ar2[i][j]);
            for(i=0;i<r1;i++)
                for(j=0;j<c2;j++)
                    {
                        for(k=0;k<c1;k++)
                            s+=ar1[i][k]*ar2[k][j];
                        ar3[i][j]=s;
                        s=0;
                    }
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                    printf("%d\t",ar1[i][j]);
                printf("\n");
            }
            for(i=0;i<r2;i++)
            {
                for(j=0;j<c2;j++)
                    printf("%d\t",ar2[i][j]);
                printf("\n");
            }
            printf("Resultant matrix:\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                    printf("%d\t",ar3[i][j]);
                printf("\n");
            }
        }
}
