#include<cstring>
template <typename T>
class node
{
public:
	string key;
	T value;
	node<T> *next;	
	node (string k, T v)
	{
		key = k;
		value = v;
	}
};
template <typename T>
class Hashtable
{
	int cs;
	int ts;
	node<T> **buckets;
	int hashfn(string key)
	{
		int l = key.length();
		int ans = 0;
		int pow =1;
		for (int i = 0; i < l; ++i)
		{
			/* code */
			ans+= key[l-i-1]*p;
			p = p*37;
			p%=ts;
			ans%=ts;
		}
		return ans;
	}
public:
	Hashtable(int ds=7)
	{
		cs= 0;
		ts= ds;
		buckets = new node<T>*[ts];
		for (int i = 0; i < ts; ++i)
		{
			/* code */
			buckets[i]=NULL;
		}
	}
	void insert(string key, T value)
	{
		int i = hashfn(key);
		node<T> *n = new node<T>(key, value);
		n->next = buckets[i];
		buckets[i]=n;
	}
	T* search(string key)
	{
		int i = hashfn(key);
		node*<T> temp = buckets[i];
		while(temp)
		{
			if(temp->key==key)
			{
				return &(temp->value);
			}
			temp = temp->next;
		}
		return NULL;
	}
};