#include<iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	stack<int> s;
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	s.push(arr[0]);
	for (int i = 1; i < n; ++i)
	{
		/* code */
		while (s.empty() == false && s.top() < arr[i]) 
    	{          
        	cout << s.top() << " --> " << arr[i] << endl; 
        	s.pop(); 
    	} 	
		s.push(arr[i]);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" greater is "<<-1<<endl;
		s.pop();
	}
	return 0;
}
