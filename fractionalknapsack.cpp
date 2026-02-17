#include<iostream>
#include<algorithm>
using namespace std;

struct Item{
	int profit,weight;
};

bool compare(Item a,Item b)
{
	return (double)a.profit/a.weight>
	(double)b.profit/b.weight;
}

int main()
{
	int n,capacity;
	cout<<"Enter number of items:";
	cin>>n;
	
	Item items[n];
	for(int i=0;i<n;i++)
{
	cout<<"Enter profit and weight of item"<<i+1<<":";
	cin>>items[i].profit>>items[i].weight;
}
cout<<"Enter Knapsack capacity:";
cin>>capacity;

sort(items,items+n,compare);
double totalprofit=0.0;

for(int i=0;i<n && capacity>0;i++)
{
	if(items[i].weight<=capacity)
	{
		totalprofit += items[i].profit;
		capacity-=items[i].weight;
	}
	else{
		totalprofit+=items[i].profit*
		((double)capacity / items[i].weight);
		break;
	}
}
cout<<"Maximum profit:"<<totalprofit;
return 0;
}
