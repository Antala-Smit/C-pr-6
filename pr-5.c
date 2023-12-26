//5. Write C program to count total number of words in a string.
#include<stdio.h>
#include<string.h>

void main(){
	char ch[50];
	int i,total=1;
	
	printf("Enter String :-");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]==' ' || ch[i]=='\n' || ch[i]=='\t'){
			total++;
		}
	}
	printf("total number of words :- %d",total);
}
