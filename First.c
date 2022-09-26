#include <studio.h>
#include <conio.h>
int main()
{
int n,i,fact=1;
printf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("factorial value of %d=%d",n,fact);
return(0);
}
