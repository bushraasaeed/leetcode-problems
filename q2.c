#include<stdio.h>
void reverseString(char* s, int sSize) {
  
    int j=sSize-1;
    char temp;
   for(int i=0;i<sSize/2;i++){
temp=s[i];
s[i]=s[j];
s[j]=temp;
j--;
   }
   	printf("%s",s);
}
int main(){
	int n;
	printf("enter size of word: ");
	scanf("%d",&n);
	char s[n];
	printf("enter  word: ");
	scanf("%s",s);
	reverseString(s,n);
	return 0;
}