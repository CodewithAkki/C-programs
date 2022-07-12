#include<stdio.h>
int main(){

int num1,num2;
printf("Enter Two Numbers:");
scanf("%d",&num1);
scanf("%d",&num2);
printf("%d = %d",num1,num2);
if(num1 > num2){
printf("number one is greater");
}else{
    printf("number two is greater");
}

 return 0;
}