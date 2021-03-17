#include <iostream>
using namespace std;

int main () {

int a,d;
cout <<"Enter a";
cin>>a;
cout<<"Enter d";
cin>>d;
int counter = 0;
while (counter++ <10)
{
	cout <<a + (counter-1)*d;
	cout <<endl;
	
}
return 0;
}
