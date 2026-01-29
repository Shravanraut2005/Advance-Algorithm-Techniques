#include<iostream>
using namespace std;
void towerofHanoi(int n,char from,char to,char aux)
{
	if(n==1)
	{
		cout<<"move disk 1 from "<< from <<" to "<< to <<endl;
		return;
	}
	
	towerofHanoi(n-1,from,aux,to);
	cout<<"Move disk "<< n <<" from "<< from <<" to "<< to <<endl;
	towerofHanoi(n-1,aux,to,from);
}

int main()
{
	int n;
	cout<<"Enter number of disk:";
	cin>>n;
	cout<<"Steps to solve tower of hanoi:\n";
	towerofHanoi(n,'A','C','B');
	return 0;
}
