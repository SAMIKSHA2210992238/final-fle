#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter values of a and b:");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("after swap a is=%d, after swap b is=%d", a,b);
    return 0;
}