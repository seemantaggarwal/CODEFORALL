#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
void upheapify(std::vector<int> &heap , int idx)
{
	if(idx == 0)
	{
		return;
	}
	int parentidx = (idx-1)/2;
	if(heap[parentidx] < heap[idx])
	{
		swap(heap[parentidx], heap[idx]);
		upheapify(heap, parentidx);
	}
	else
	{
		return;
	}
}
void insert(vector<int> &heap,  int key)
{
	heap.push_back(key);
	upheapify(heap, heap.size()-1);
}
void display(std::vector<int> &heap)
{
	for (int i = 0; i < heap.size(); ++i)
	{
		/* code */
		cout<<heap[i]<<" ";
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
		insert(heap, x);
		upheapify(heap, x);
	}
	display(heap);
	return 0;
}
