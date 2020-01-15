#include <iostream>
#include <queue>
using namespace std;
struct comp
{	
	bool operator(car a, car b)()
	{
		return a.dist() < b.dist();
	}
};
/*bool comp(int a, int b)
{
	if(a<b)
	{
		return false;
	}
	else
	{
		return true;
	}
}*/ // this gives error coz priority queue asks for a class not func
class car
{
public:
	int x;
	int y;
	int id;
	car(int i, int x1, int y1)
	{
		id=i;
		x1=x;
		y1=y;
	}
	int dist()
	{
		return x*x + y*y;
	}
	void print()
	{
		cout<<id<<" "<<x<<" "<<y;
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	//priority_queue<int> x; by default this is max heap, where max is on top
	int x[10];
	int y[10];
	int n;
	cin>>n;
	priority_queue<car, std::vector<car>, comp> pq; 
	for(int i=0; i<n; ++i)
	{
		cin>>x[i];
	}
	for(int i=0; i<n; ++i)
	{
		cin>>y[i];
	}
	for(int i=0; i<n; ++i)
	{
		car c(i, x[i], y[i]);
		pq.push(c);
	}
	while(!pq.empty())
	{
		car c = pq.top();
		pq.pop();
		c.print();
	}
	//  stl m min heap bnana

	return 0;
}