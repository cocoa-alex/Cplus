#include <iostream>
using namespace std;
int MyConvert(int num);

int main()
{
	/* code */
	int num;
	cout<<"Please Enter the number of wave:"<<endl;
	cin>>num;
	int result= MyConvert(num);
	cout<<num<<"wave(s)="<<result<<"yards"<<endl;
	return 0;
}

int MyConvert(int num)
{
	return 220*num;
}


