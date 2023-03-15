#include <stdio.h>
#include <math.h>
int main(){
    int v,u,a,t,c,p,h,b,s;
    printf("enter value of v:");
    scanf("%d",&v);
    printf("enter value of u:");
    scanf("%d",&u);
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of t:");
    scanf("%d",&t);
    printf("enter value of c:");
    scanf("%d",&c);
    printf("enter value of p:");
    scanf("%d",&p);
    printf("enter value of h:");
    scanf("%d",&h);
    v=u+a*t;
    s=u*t+(1/2*a*t*t);
    t=2*a+pow(2,-1/2)+(9*c);
    h=pow(b*b+p*p , -1/2);
    printf("now v is:%d\n",v);
    printf("now s is:%d\n",s);
    printf("now t is:%d\n",t);
    printf("now h is:%d\n",h);
    return 0;
}