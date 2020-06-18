#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int rem;
	int ss=0;
	int tmp=n;
	while (tmp!=0){
		rem=n%10;
		ss= (ss*10) +rem;
		tmp/=10;
		
	}
	
	if (n==ss)
	cout<<"palindrome"<<endl;
	else 
	cout<<"not palindrome"<<endl;
	
	return 0;
}
