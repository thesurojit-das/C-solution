#include <stdio.h>
int main()
{	
    int n,c,a=0,b=1;
    printf("Please Enter the number of elements you want to print the series");
    scanf("%d",&n);
    printf("Fibonacci Series of %d \n",n);
    printf("%d %d ",a,b);
    for(int i=0; i<n-2; i++)
    {
        c=b+a;
        printf("%d ",c );
        a=b;
        b=c;
    }
}
