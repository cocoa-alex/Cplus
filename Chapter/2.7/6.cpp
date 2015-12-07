#include <iostream>
using namespace std;
void MyConvert(int hour,int minute);

int main()
{
	/* code */
	int hour,minute;
	cout<<"Enter the number of hours:";
	cin>>hour;
	cout<<"Enter the number of minutes:";
	cin>>minute;
	MyConvert(hour,minute);
	return 0;
}

void MyConvert(int hour,int minute)
{
	cout<<"Time: "<<hour<<":"<<minute;
}


