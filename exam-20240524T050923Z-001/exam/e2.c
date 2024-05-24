#include<stdio.h>
main(){
	
	int i;
	char str[30];
	int count = 0;
	printf("enter any name or sentence :");
	gets(str);
	int length = strlen(str);
	
	for(i=0;i<length;i++){
		if(str[i]=='a'|| str[i]=='e' || str[i]=='m')
		printf("%c",str[i]);
		count++;
	}
	else{
	printf("  ");
	}

   printf("\n the number of vowels in this string is %d",count);
}
