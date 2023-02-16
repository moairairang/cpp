#include <stdio.h>
    int s1,s2;
	float a;
main(){
    printf("Enter base : ");
    scanf("%d",&s1);
    printf("Enter hight : ");
    scanf("%d",&s2);
	a = s1*s2;
	printf("side1 = : %d \n side2 = : %d \n Area = : %.3f",s1,s2,a);
}
