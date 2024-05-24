#include<stdio.h>
swap(int *ptr1,int*ptr2){
	int m;
	m = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = m;
}

main(){
	int m,s;
	printf("enter the value of m:");
	scanf("%d,&m");
	printf("enter the value of s:");
	scanf("%d,&s");
	swap(&m,&s);
	printf("the swapped variables: \n");
	printf("m: %d\n",m);
	printf("s:%d",s);
}

	

