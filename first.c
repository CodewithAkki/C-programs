#include<stdio.h>
int even(int num);
int main(){
    even(100);
    return 0;
}
int even(int num){
    if(even(num)==0){
        return 0;
    }else{
    if((even(num-1)%2)==0){
      printf("\n%d is even",even(num));
    }else{
    printf("\n%d is odd",even(num));
        }
    }
}