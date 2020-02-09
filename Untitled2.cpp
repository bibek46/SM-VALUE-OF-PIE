#include<stdio.h>
#include<stdlib.h>
#define SEED 35791246
int main(){
	int n,circount,i;
	double X,Y,x,y,z,pi;
	printf("input no of iterations needed to compute:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		X=rand()/RAND_MAX;
		Y=rand()/RAND_MAX;
		z=X*x+Y*y;
		if(z<=1){
			circount=circount+1;
		}
	}
	pi=4*(circount/n);
	printf("value of pi:",pi);
}
