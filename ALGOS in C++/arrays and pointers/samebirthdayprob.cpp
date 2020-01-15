#include <iostream>
using namespace std
int main(int argc, char const *argv[])
{
	/* code */
	// here p is the number of people who have diff bday 
	//so when p<0.5, 1-0>0.5 and that is the number of people who have same bday
	float num = 365, den = 365, p=1,n=0;
	while(p>0.5)
	{
		p = p*num/den;
		num--;
		n++;
	}
	cout<<n;
	return 0;
}