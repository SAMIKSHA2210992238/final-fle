#include <stdio.h>
int main(){
    float r,area,circumference;
    printf("enter radius:");
    scanf("%f",&r);
    circumference=2*3.14*r;
    area=3.14*r*r;
    printf("circumference is: %f",circumference);
    printf("area is: %f",area);
    return 0;
}