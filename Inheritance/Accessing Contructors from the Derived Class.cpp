#include<iostream>
using namespace std;

class alpha
{
	int x;
public:
	alpha(int i)
	{
		x=i;
	}

	void show_x()
	{
		cout<<"x= "<<x<<endl;
	}

};

class beta
{
	float y;
public:
	beta (float j)
	{
		y=j;
	}

	void show_y()
	{
		cout<<"y= "<<y<<endl;
	}

};

class gamma: public beta, public alpha
{
	int m,n;
public:
	gamma(int a, float b, int c, int d): alpha(a), beta(b)
	{
		m=c;
		n=d;
	}

	void show_mn()
	{
		cout<<"m= "<<m<<endl;
		cout<<"n= "<<n<<endl;
	}

};

int main()
{
	gamma g(5, 10.75, 20, 30);
	cout<<endl;

	g.show_x();
	g.show_y();
	g.show_mn();

	system("pause");
	return 0;
}

