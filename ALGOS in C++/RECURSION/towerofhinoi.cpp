#include<iostream>
using namespace std;
void hinoisteps(int n, char src, char dest, char help){
	if(n==0){
		return;
	}
	hinoisteps(n-1, src, help, dest);
	cout<<n<<" from "<<src<<" to "<<dest<<endl;
	hinoisteps(n-1, help, dest, src);
}
int main()
{
	int n;
	cout<<"enter number of disks";
	cin>>n;
	hinoisteps(n, 'A', 'B', 'C');
}