#include<stdio.h>
int main()
{
    int k[100][100];
    int n,i,j,I,T,H;
    printf("Enter the number of node : ");
    scanf("%d",&n);
    int J[n-3];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("distance between %d - %d :", i,j);
            scanf("%d ",&k[i][j]);
        }
    }
    int indexC1 = n/2;
    int c1[indexC1];
    for(i=1;i<=indexC1;i++)
    {
        c1[i]=i;
    }
    int indexC2 = n-indexC1;
    int c2[indexC2];
    for(i=1;i<=indexC2;i++)
    {
        c2[i]=indexC1+i;
    }
     I = c1[1];
     T = c2[1];


    int count = 1;

    while(count <= 1)
    {
        if (count== I || count == T)
        {
            count++;
            continue;
        }
        int H = count;

        for(i=1;i<=n;i++)
        {
            j=1;
            if(i== I || i==T || i==H)
            {
                continue;
            }
            else
            {
                J[j]=i;
                j++;
            }
        }
    }

    printf("%d", I);
    printf("%d", T);
    printf("%d", H);
    for(i=1;i<=n-3;i++)
    {
        printf("%d , ", J[i]);
    }

}

