//1. Write C program to convert string to uppercase  

#include<stdio.h>
#include<string.h>

void main(){
	char ch[50];
	int i;
	printf("Enter String :-");
	gets(ch);
	
	printf("String Uppercase :- %s",strupr(ch));
}
