#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#define bucketSize 256
using namespace std;
void bktInput(int a,int b)
{
	if(a>bucketSize)
		cout<<"\n\t\tBucket overflow";
	else
	{
		usleep(500);
		while(a>b)
		{
			cout<<"\n\t\t"<<b<<" bytes outputted.";
			a-=b;
			usleep(500);
		}
		if (a>0)
			cout<<"\n\t\tLast "<<a<<" bytes sent\t";
		cout<<"\n\t\tBucket output successful";
	}
}
int main()
{
	int op;
	cout<<"Enter output rate : ";
	cin>>op;
	int size[]={100,345,230,78,980,130,7,89,670,256};
	for(int i=0;i<10;i++)
	{
		usleep(5);
		cout<<"\nPacket no "<<i+1<<"\tPacket size = "<<size[i];
		bktInput(size[i],op);
	}
	return 0;
}
