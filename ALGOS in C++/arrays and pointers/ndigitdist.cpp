#include<iostream>
using namespace std;
int a1=1;
int a2=2;
int count = 0;
void countN(int n,char check,int i){
	if(i == n-1)
	{
     if(check == 'a')
	 count = count+2;
	 if(check == 'b')
	 count++;
	}
	
    else{
		if(check != 'b'){
			countN(n,'a',i+1);
			countN(n,'b',i+1);
		}
		else{
			countN(n,'a',i+1);
		}
	} 
	
}
int main() {
	int n,t,i=0;
	cin>>t;
	while(t--){
		
	count = 0;
	cin>>n;
	countN(n,'a',0);
	cout<<"#"<<++i<<" : "<<count<<"\n";
	}
	
	return 0;
}
