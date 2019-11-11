#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;++i)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int x=n/4;
	    int y = x + n/4;
	    int z = y + n/4;
	    if(arr[x]==arr[y]||arr[y]==arr[z]||arr[z]==arr[x]||arr[z]==arr[z-n/4])
	    {
	    	cout<<-1<<endl;
		}
		else if(arr[x]==arr[x-1]|| arr[y]==arr[y-1]|| arr[z]==arr[z-1])
		{
			cout<<-1<<endl;
		}
		else
	{
		cout << arr[x] << " " << arr[y] << " " << arr[z] << "\n";
	}
}
return 0;
	
}

