#include<stdio.h>

int main(){

int number;
printf("Enter Number:");
scanf("%d",&number);

/*

    125/10
    12.5 = 12
    125%10
    05

*/

int i= 0;
while(number!=0){
number=number/10;
i++;
}


}