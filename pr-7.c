//7.Write C program to string length count (without string function use)
#include<stdio.h>


#include<stdio.h>

void main(){
	char ch[50];
	int i,words=0;
	
	printf("Enter String :-");
	gets(ch);
	
	for(i=0;ch[i];i++){
		words++;
	}
	printf("string length count :- %d",words);
}
