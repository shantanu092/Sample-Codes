#include<stdio.h>

bool isvowel(char ch){
	if (ch=='a'||ch=="e"||ch=="i"||ch=='o'||ch=="u")
	   return true;
	   else
	     return false;
}

int count_vowels(char str[], int n){
	
	if (n==1)
	   return isvowel(str[n-1]);
	return count_vowels(str,n-1)+isvowel(str[n-1]);
}
