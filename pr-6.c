//6.Write C program to search all occurrences of a character in a string.
#include<stdio.h>
#include<string.h>

void main(){
	char ch[50],o;
	int i;
	
	printf("Enter String :-");
	gets(ch);
	printf("Enter any character to search: ");
    o = getchar();
	
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]==o){
			printf("occurrences of a character :-  %d\n",i);
		}
	}
}
