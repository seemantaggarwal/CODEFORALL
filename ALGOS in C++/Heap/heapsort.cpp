#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
void display(std::vector<int> &heap)
{
	for (int i = 0; i < heap.size(); ++i)
	{
		/* code */
		cout<<heap[i]<<" ";
	}
}
void downheapify(std::vector<int> &heap , int idx)
{
	int lftidx = 2*i +1;
	int ridx = 2*i + 2;
	if(lftidx >= heap.size() && ridx>=heap.size())
	{
		return;
	}
	int largestidx =  idx;
	if(lftidx < heap.size() && heap[lftidx] > heap[largestidx])
	{	
		largestidx = lftidx;
	}
	if(ridx < heap.size() && heap[ridx] > heap[largestidx])
	{
		largestidx = ridx;
	}
	if(largestidx == idx)
	{
		return;
	}
	swap(heap[largestidx], heap[idx]);
	downheapify(heap , largestidx);
}

void downheapifyhelper(std::vector<int> &heap , int idx, int heapsize)
{
	int lftidx = 2*i +1;
	int ridx = 2*i + 2;
	if(lftidx >= heapsize && ridx>=heapsize)
	{
		return;
	}
	int largestidx =  idx;
	if(lftidx < heapsize && heap[lftidx] > heap[largestidx])
	{	
		largestidx = lftidx;
	}
	if(ridx < heapsize && heap[ridx] > heap[largestidx])
	{
		largestidx = ridx;
	}
	if(largestidx == idx)
	{
		return;
	}
	swap(heap[largestidx], heap[idx]);
	downheapifyhelper(heap , largestidx, heapsize);
}
void buildheap(std::vector<int> &heap)
{
	for (int i = heap.size() - 1; i >= 0 ; --i)
	{
		/* code */
		downheapify(heap, i)
	}
}
void heapsort(std::vector<int> &heap)
{
	int heapsize = heap.size();
	buildheap(heap);
	for(int i = heap.size()-1; i>=0; --i)
	{
		swap(arr[0], arr[i]);
		heapsize-=1;
		downheapify(arr, 0, heapsize);
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	vector<int> heap;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int x;
		cin>>x;
		heap.push_back(x);
	}
	heapsort(heap);
	display(heap);
	return 0;
}
