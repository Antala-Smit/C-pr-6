//3. Write C program to count total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>

void main(){
	char ch[50];
	int i,alp=0,dgt=0,othr=0;
	
	printf("Enter String :-");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++){
        if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
        {
            alp++;
        }else if(ch[i]>='0' && ch[i]<='9')
        {
            dgt++;
        }else
        {
            othr++;
        }
    }
	printf("Alphabets = %d\n", alp);
    printf("Digits = %d\n", dgt);
    printf("Special characters = %d", othr);
}
