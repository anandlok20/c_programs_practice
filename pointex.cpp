#include<iostream>
using namespace std;

void mul(int *p)
{
for(int i=0;i<10;i++)
cout<<2*p[i]<<"\t";
}
int main()
{
int *p = new int[10];

cout<<"\nEnter the value:"<<endl;
for(int i=0;i<10;i++)
cin>>p[i];
for(int j=0;j<10;j++)
cout<<p[j]<<"\t";
cout<<endl;
mul(p);
cout<<"\nValue at p:"<<p<<endl;
cout<<"\nValue at &p:"<<&p<<endl;

delete(p);
return 0;
}
