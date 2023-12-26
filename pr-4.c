//4. Write C program to count total number of vowel or consonant in a string.
#include<stdio.h>
#include<string.h>

void main(){
	char ch[50];
	int i,v=0,c=0,check=0;
	
	printf("Enter String :-");
	gets(ch);
	
	for(i=0;i<ch[i]!='\0';i++){
		if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z' || ch[i]<=' '){
			if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
				v++;
			}else{
				c++;
			}
		}else{
			check=1;
			break;
		}
	}
	if(check != 1){
		printf("Count vowels :- %d\n",v);
		printf("Count consonant :- %d\n",c);
	}else{
		printf("Not valid string");
	}
}
