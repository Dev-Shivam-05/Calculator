#include <stdio.h>

int main(){
	int x,y,process;
	printf("\t\t\t\t\t\tPress 1 to do sum of two number\n\t\t\t\t\t\tPress 2 to do subtraction of two number\n\t\t\t\t\t\tPress 3 to do product of two number\n\t\t\t\t\t\tPress 4 to do Divide of two number\n\t\t\t\t\t\tPress 5 to do mod of two number\n\t\t\t\t\t\tPress 0 to exit\n");
	
	printf("Enter the process You want : ");
	scanf("%d",&process);
	
	printf("Enter a number You want to process : ");
	scanf("%d",&x);
	
	printf("Enter a number You want to process: ");
	scanf("%d\n\n\n",&y);
	
	if(process>=1){
		printf("Loading....\n\n\n");
	}
	else if(process>5){
		printf("Please Enter a correct value");
	}
	else{
		printf("Error");
	}
	
	switch(process){
		case 1 : {
			printf("The Sum of the givem two number %d and %d is : %d",x,y,sum(x,y));
			break;
		}
		case 2 : {
			printf("The Subtraction of the givem two number %d and %d is : %d",x,y,sub(x,y));
			break;
		}
		case 3 : {
			printf("The Product of the givem two number %d and %d is : %d",x,y,prod(x,y));
			break;
		}
		case 4 : {
			printf("The Division of the givem two number %d and %d is : %d",x,y,div(x,y));
			break;
		}
		case 5 : {
			printf("The Modulas of givem two number %d and %d is :%d ",x,y,mod(x,y));
			break;
		}
		default : {
			printf("ERROR");
			break;
		}
	}
}
	
	int sum(int num,int num1) {
		return num + num1;
	}
	
	
	int sub(int num,int num1) {
		return num - num1;
	}
	
	
	int prod(int num,int num1) {
		return num*num1;
	}
	
	
	int div(int num,int num1) {
		return num / num1;
	}
	
	
	int mod(int num,int num1) {
		return num % num1;
	}


