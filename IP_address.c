#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ip[20];
    int a,b,c,d,rem,rev1,rev2,rev3,rev4,mf,i;
    printf("Enter an IP address in binary :");
    scanf("%s",&ip);
    sscanf(ip,"%d.%d.%d.%d",&a,&b,&c,&d);
    sprintf(ip,"%d %d %d %d",a,b,c,d);
    if((a<0||a>11111111)||(b<0||b>11111111)||(c<0||c>11111111)||(d<0||d>11111111))
    {
        printf("\nInvalid IP address ");
        exit(0);
    }
    rev1=0,mf=1;
    while(a>0)
    {
        rem=a%10;
        rev1=(rem*mf)+rev1;
        mf=mf*2;
        a=a/10;
    }
    rev2=0,mf=1;
    while(b>0)
    {
        rem=b%10;
        rev2=(rem*mf)+rev2;
        mf=mf*2;
        b=b/10;
    }
    rev3=0,mf=1;
    while(c>0)
    {
        rem=c%10;
        rev3=(rem*mf)+rev3;
        mf=mf*2;
        c=c/10;
    }
    rev4=0,mf=1;
    while(d>0)
    {
        rem=d%10;
        rev4=(rem*mf)+rev4;
        mf=mf*2;
        d=d/10;
    }
    printf("%d.%d.%d.%d",rev1,rev2,rev3,rev4);
    return 0;

}
