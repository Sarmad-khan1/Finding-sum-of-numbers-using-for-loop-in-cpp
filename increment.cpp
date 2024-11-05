#include <iostream>
using namespace std;
int main()
{
	int total=0;
	int number=0;
	for(int i = 1; i<=5; ++i)
	{
		cout<<"Enter Number: "<<i<<":";
		cin>>number;
		total=total + number;
		
	}
	cout<<"sum of 5 numbers comes out to be: "<<total<<endl;

}

