#include<stdio.h>
int main(){
	float num[10];
	int i,j,a,b;
	int min_index;
	float median;
	printf("Enter Number : ");
	for(i=0;i<10;i++){
		scanf("%f",&num[i]);
	}
	for(i=0;i<10;++i){
		min_index = i;
		for(j=i;j<10;++j){
			if(num[j]<num[min_index]){
				min_index=j;
			}
		}
		a=num[i];
		b=num[min_index];
		num[i]=b;
		num[min_index]=a;
	}
	median = (num[4]+num[5])/2;
	printf("%.2f",median);
	
}