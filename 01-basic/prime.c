#include  <stdio.h>
#include <math.h>
int main()
{
	int num,n;
	for(num=100;num<200;num+=1){
		int flag = 1;//标记假设是素数 
		for(n=2;n<=(int)sqrt(num);n++){
			//判断是否有除了1和本身以外的除数
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
	 
