#include <stdio.h>
#include <stdlib.h>
int isPrime(int x) {
    if (x<2)
        return 0;
    for (int i=2;i*i<= x;i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int Count (int n, int m, int a[n][m])
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(isPrime(a[i][j]))
            {
                printf("%d is prime \n",a[i][j]);
                count++;
            }

        }
}
return count;
}
int main()
{
    int i,j,n,m;
    printf("enter n and m");
    scanf("%d %d",&n,&m);
  int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
       }
    }
    printf("count of prime numbers is :%d \a",Count(n,m,a));

}
