#include<stdio.h>
int main(){
	char c;
	printf("Enter the alfabet:");
	scanf("%c",&c);
	switch(c){
		case 'A':  case 'E':  case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("Alfabet is vowel");
			break;
	    default:
			printf("Alfabet is consonent.");
			break;
	}
	return 0;
}
