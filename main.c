#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,j=9,k=10;
	for(i==0;i<=10;i++){
		printf("\n");
		printf("%d x %d = %d\n",a,i,a*i);
		printf("%d x %d = %d\n",b,i,b*i);
		printf("%d x %d = %d\n",c,i,c*i);
		printf("%d x %d = %d\n",d,i,d*i);
		printf("%d x %d = %d\n",e,i,e*i);
		printf("%d x %d = %d\n",f,i,f*i);
		printf("%d x %d = %d\n",g,i,g*i);
		printf("%d x %d = %d\n",h,i,h*i);
		printf("%d x %d = %d\n",j,i,j*i);
		printf("%d x %d = %d\n",k,i,k*i);
	}
	
	printf("\n");
	system("pause");
	return 0;
}
