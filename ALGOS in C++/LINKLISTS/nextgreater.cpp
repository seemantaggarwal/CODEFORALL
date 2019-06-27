#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	"Enter number of elements";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin>>arr[i];
	}
	int curr;
	stack<int> s;
	//pushing the first element to the stack
	s.push(arr[0]);
	//iterating on rest of the elements
	for(int i=1; i<n; ++i)
	{
		//agar kisi bhi point p mera stack khali hojata hai toh shuru se mtlb us element ko push kro and aage bado
		if(s.empty())
		{
			s.push(arr[i]);
			continue;
		}
		//jab tak mera stack khali nhi hojata aur s ka top mre array k element s chote
		while(s.empty()==false && s.top()<arr[i])
		{
			cout<<s.top()<<"--->"<<arr[i]<<endl;
			s.pop();
		}
		//ab mera element ya toh chota nhi ya stack khali ho gaya toh use push krdo
		s.push(arr[i]);
		//ye check ho chuka ki kuch toh hai ab toh agar mera stack khali nhi h toh bache hue elements nikalke print krdo
	}
	while (s.empty() == false) 
	{ 
    	cout << s.top() << " --> " << -1 << endl; 
    	s.pop(); 
  	} 
}
