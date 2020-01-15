// kth largest element in a 2d array sorted row-wise and column-wise 
#include<iostream> 
#include<climits> 
using namespace std; 

// A structure to store an entry of heap. The entry contains 
// a value from 2D array, row and column numbers of the value 
struct HeapNode { 
	int val; // value to be stored 
	int r; // Row number of value in 2D array 
	int c; // Column number of value in 2D array 
}; 

// A utility function to swap two HeapNode items. 
void swap(HeapNode *x, HeapNode *y) { 
	HeapNode z = *x; 
	*x = *y; 
	*y = z; 
} 

// A utility function to minheapify the node harr[i] of a heap 
// stored in harr[] 
void minHeapify(HeapNode harr[], int i, int heap_size) 
{ 
	int l = i*2 + 1; 
	int r = i*2 + 2; 
	int smallest = i; 
	if (l < heap_size && harr[l].val < harr[i].val) 
		smallest = l; 
	if (r < heap_size && harr[r].val < harr[smallest].val) 
		smallest = r; 
	if (smallest != i) 
	{ 
		swap(&harr[i], &harr[smallest]); 
		minHeapify(harr, smallest, heap_size); 
	} 
} 

// A utility function to convert harr[] to a max heap 
void buildHeap(HeapNode harr[], int n) 
{ 
	int i = (n - 1)/2; 
	while (i >= 0) 
	{ 
		minHeapify(harr, i, n); 
		i--; 
	} 
} 

// This function returns kth smallest element in a 2D array mat[][] 
int kthSmallest(int mat[4][4], int n, int k) 
{ 
	// k must be greater than 0 and smaller than n*n 
	if (k <= 0 || k > n*n) 
	return 0; 

	// Create a min heap of elements from first row of 2D array 
	HeapNode harr[n]; 
	for (int i = 0; i < n; i++) 
		harr[i] = {mat[0][i], 0, i}; 
	buildHeap(harr, n); 

	HeapNode hr; 
	for (int i = 0; i < k; i++) 
	{ 
	// Get current heap root 
	hr = harr[0]; 

	// Get next value from column of root's value. If the 
	// value stored at root was last value in its column, 
	// then assign INFINITE as next value 
	int nextval = (hr.r < (n-1))? mat[hr.r + 1][hr.c]: INT_MAX; 

	// Update heap root with next value 
	harr[0] = {nextval, (hr.r) + 1, hr.c}; 

	// Heapify root 
	minHeapify(harr, 0, n); 
	} 

	// Return the value at last extracted root 
	return hr.val; 
} 

// driver program to test above function 
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int arr[m][100];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < n; ++j)
		{
			/* code */
			cin>>arr[i][j];
		}
	}
	int k;
	cin>>k;
	int ans = kthsmallest(arr, n, k);
	cout<<ans;
	return 0;
}				