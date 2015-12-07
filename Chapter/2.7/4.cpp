#include <iostream>
using namespace std;
int MyConvert(int num);

int main()
{
	/* code */
	int num;
	cout<<"Please enter a Celsius value:";
	cin>>num;
	int result= MyConvert(num);
	cout<<num<<" degress Celsius is "<<result<<" degrees Fahrenheit."<<endl;
	return 0;
}

int MyConvert(int num)
{
	return 1.8*num+32.0;
}


