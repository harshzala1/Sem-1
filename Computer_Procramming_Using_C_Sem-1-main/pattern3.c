#include<stdio.h>
void main(){

    int r,c,n,a;
    
    printf("Enter Value for n : ");
    scanf("%d",&n);

    for(r=1;r<=n;r++){
            for(a=n;a>=r;a--){
                printf(" ");
            }
            for(c=1;c<=r;c++){
                printf(" *");
            }
         printf("\n");
    }
    for(r=n-1;r>=0;r--){

         for(a=n;a>=r;a--){
                printf(" ");
            }
            for(c=1;c<=r;c++){
                printf(" *");
            }
         printf("\n");
    }

}