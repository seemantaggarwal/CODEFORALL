#include <iostream>
using namespace std;
int gcd(int a , int b)
{
 if (a == 0 ) 
      return b;
     if(b == 0)
        return a;
   else if (a == b) 
      return a; 
   else if (a > b) 
      return gcd(a - b, b); 
   else return gcd(a, b - a); 
}
int main(int argc, char const *argv[])
{
	/* code */
	int a, b;
	cin>>a>>b;
	int ans = gcd(a, b);
	cout<<ans;
	return 0;
}