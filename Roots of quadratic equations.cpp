#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float discriminant,root1,root2,realpart,imaginarypart;
	printf("enter coefficients a : ");
	scanf("%f",&a);
		printf("enter coefficients b: ");
	scanf("%f",&b);
		printf("enter coefficients c : ");
	scanf("%f",&c);	
	
	discriminant = b*b-4*a*c;
	if(discriminant >0){
		root1 = (-b+sqrt(discriminant))/(2*a);
		root2 = (-b-sqrt(discriminant))/(2*a);
		printf("Root1 = %f and %f \n", root1,root2);
	}
	else if(discriminant ==0){
		root1 = root2 = -b/(2*a);
		printf("Root 1 = Root 2 = %f\n", root1);
	}
	else {
		realpart = -b/(2*a);
		imaginarypart = sqrt(-discriminant)/(2*a);
		printf("Root 1 = %f + %fi and Root 2 = %f-%fi\n", realpart,imaginarypart,realpart,imaginarypart);
	}
	return 0;
}
