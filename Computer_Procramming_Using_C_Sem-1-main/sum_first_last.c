#include<stdio.h>
#include<math.h>
void main(){
    int n,r,sum=0,l=0,x;
    printf("Enter Number : ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        l++;
        n=n/10;
        
    }
    n=x;
        r=n%10;
        n=n/(pow(10,l-1));
        sum=n+r;
    
    printf("Sum of First and Last Digit of Number = %d",sum);
}