#include <iostream>
using namespace std;
void A();
void B();

int main()
{
	/* code */
	A();
	A();
	B();
	B();
	return 0;
}

void A()
{
	cout<<"Three blind mice"<<endl;
}

void B()
{
	cout<<"See how they run"<<endl;
}

