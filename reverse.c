#include<stdio.h>
#include<string.h>
int main(){
	char str1[30],str2[30];
	gets(str1);
	char *p1;
	p1=str1+strlen(str1)-1;
	char *p2;
  p2=str2;
	//printf("%c", reverse(str));
	//reverse(str);
	int i;
	/*for (i=0;p[i];i++)
	   printf("%c",p[i]);
	*/
	
	
while (p1>=str1){
	*p2++=*p1--;
	printf("%c",*p2);
}
*p2='\0';
//printf("%s",str2);
	return 0;
}

/*void reverse(char *p){
	char str[30];
	p=str;
	while (*p){
	   printf("%s",*p--);
	 
	}
}*/
