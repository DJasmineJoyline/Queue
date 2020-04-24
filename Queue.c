#include<stdio.h>
int main()
{
int n,cap,k,i,bus=1,a[100];
scanf("%d",&n);
scanf("%d",&cap);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int c=cap;
for(i=0;i<n;i++)
{
    k=a[i];
    if(k<=c)
    {
        c=c-k;
    }
    else
    {
        bus++;
        c=cap-k;
    }
}
printf("%d",bus);

	
	
	return 0;
}
