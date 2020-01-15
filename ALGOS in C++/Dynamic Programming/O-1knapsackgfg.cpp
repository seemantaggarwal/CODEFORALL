#include <iostream>
#include <map>
#include<algorithm>
#include<vector>
using namespace  std;
int max(int a, int b) { return (a > b)? a : b; } 
  
// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack( int wt[], int val[], int n, int W) 
{ 
   int i, w; 
   int K[n+1][W+1]; 
  
   // Build table K[][] in bottom up manner 
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
} 
int main(int argc, char const *argv[])
{
	/* code */
	int n,s;
	cin>>n>>s;
	int size[n], value[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>size[i];
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>value[i];
	}
	int answ = knapSack(size, value, n, s);
	cout<<answ;
	return 0;
}