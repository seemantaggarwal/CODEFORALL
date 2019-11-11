#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	map<int, int> m;
	for(int i=0; i<n;++i)
	{
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	/*for (int i = 0; i < n; i++) { 
        int rem = sum - arr[i]; 
        if (m.find(rem) != m.end()) { 
            cout << "(" << rem << ", "<< arr[i] << ")" << endl; 
            cout<<m.find(rem)<<endl;
        }  
    } */
   
  
    // Traverse through all elements 
    for (int i = 0; i < n; i++) { 
  
        // Search if a pair can be formed with 
        // arr[i].
        int rem = sum - arr[i]; 
        if (m.find(rem) != m.end()) {
                cout << "(" << rem << ", "<< arr[i] << ")" << endl; 
        } 
        m[arr[i]]++;
    }
}
