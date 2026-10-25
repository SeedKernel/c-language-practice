#include  <stdio.h>
#include <math.h>
int main()
{
	int num,n;
	for(num=100;num<200;num+=1){
		int flag = 1;//标记 
		for(n=2;n<=sqrt(num);n++){
			if(num % n == 0){
				flag = 0;
				break;
			}
		}
		if(flag){
			printf("%d ",num);
		} 
	} 
	return 0;  
}
	 
