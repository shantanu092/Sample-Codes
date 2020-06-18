#include <iostream>

using namespace std;

int value(){
    static int age=18;
    //age++;
    return ++age;
}

int main()
{
	
    cout<<value()<<endl;
    cout<<value()<<endl;
    return 0;
}
