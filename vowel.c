#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;int flag=0;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("Vowel");
		exit(0);
		break;
	}
	if(isalpha(ch))
	printf("Consonant");
	else
	printf("invalid");
}
