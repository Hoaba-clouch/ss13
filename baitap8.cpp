#include<stdio.h>
int main(){
	int a,b;
	printf(" moi ban nhap vao hai so a va b \n");
	scanf("%d%d",&a,&b);
	if(a>=0 && b>=0){
		if(a==0&&b==0){
			printf("khong co uoc chung lon nhat  " );
		}else if(a==0|| b==0){
			printf(" UCLN cua hai so tren la %d",(a==0)?b:a);
		}else{
		
			while(a!=b ){
			 if(a>b){
			 	a=a-b;
			 }else{
			 	b=b-a;
			 }
			}
			printf("uoc chung lon nhat cua hai so la %d\n",a);
		
			
		}
		
	}else{
		printf(" khong hop le moi ban nhap lai so a,b");
	}
	return 0;
}
