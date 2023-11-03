#include<iostream>
using namespace std;

void Hanoil(int level,char fir,char second,char third)
{
	if(level==1)
	{
		cout<<"從"<<fir<<"移動到"<<third<<endl;
	}
	else
	{
		Hanoil(level-1,fir,third,second);
		cout<<"從"<<fir<<"移動到"<<third<<endl;
		Hanoil(level-1,second,fir,third);
	}
}
int main()
{
	int level=0;
	char A='A',B='B',C='C';
	
	cout<<"請輸入要移動的層數:"<<endl;
	cin>>level;
	Hanoil(level,A,B,C);
}
