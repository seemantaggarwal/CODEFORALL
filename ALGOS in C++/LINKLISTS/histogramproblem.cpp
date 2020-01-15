#include<iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	stack<int> s;
	int maxarea=0;
	int currarea=0;
	int t;
	int i=0;
	while(i<n)
	{
		if(s.empty() || arr[s.top()]<=arr[i])
		{
			s.push(i++);
		}
		else
		{
			t=s.top();
			s.pop();
			currarea = arr[t] * (s.empty() ? i :  
                                   i - s.top() - 1); 
			if (maxarea < currarea) 
                maxarea = currarea; 
		}
	}
	while(!s.empty())
	{
		t = s.top(); 
        s.pop(); 
        currarea = arr[t] * (s.empty() ? i :  
                                i - s.top() - 1); 
  
        if (maxarea < currarea) 
            maxarea = currarea;
	}
	cout<<maxarea;
	return 0;
}
