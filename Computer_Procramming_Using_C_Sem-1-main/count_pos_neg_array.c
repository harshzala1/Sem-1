#include<stdio.h>
void main(){
	int i,n,pos=0,neg=0;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	

	for(i=0;i<n;i++){
		
	printf("Enter Number : ");
	scanf("%d",&num[i]);
	if(num[i]>0){
		pos++;
		}
	else if(num[i]<0){
		neg++;
	 	}
	}
	
	printf("Total Positive Numbers : %d\n",pos);
	printf("Total Negative Numbers : %d\n",neg);
}
