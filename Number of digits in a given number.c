#include<stdio.h>
int main(){
    int n,r,count=0;
    printf("Enter a number");
    scanf("%d",&n);
    
    while(n>0){
        r=n%10;
        count++;
        n=n/10;
    }
    printf("no of digits is/are %d",count);
}

