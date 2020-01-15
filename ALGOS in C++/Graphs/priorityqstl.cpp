#include <iostream>
#include <queue>
using namespace std;
struct  comp
{
	bool operator()(int a, int b)
{
	if(a<b)
	{
		return false;
	}
	else
	{
		return true;
	}
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
int main(int argc, char const *argv[])
{
	/* code */
	//priority_queue<int> x; by default this is max heap, where max is on top
	priority_queue<int, std::vector<int> v, greater<int>> q1; //  stl m min heap bnana
	priority_queue<int, std::vector<int> v, comp> q;
	q.push(2);
	q.push(3);
	return 0;
}