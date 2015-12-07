#include <iostream>
using namespace std;
double MyConvert(double num);

int main()
{
	/* code */
	double num;
	cout<<"Enter the number of light years:";
	cin>>num;
	double result= MyConvert(num);
	cout<<num<<" light years = "<<result<<" astronomical units."<<endl;
	return 0;
}

double MyConvert(double num)
{
	return 63240*num;
}


