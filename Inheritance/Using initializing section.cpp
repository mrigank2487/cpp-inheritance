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

	void show_alpha()
	{
		cout<<"x= "<<x<<endl;
	}

};

class beta
{
	float p,q;
public:
	beta (float a, float b): p(a), q(b+p)
	{}

	void show_beta()
	{
		cout<<"p= "<<p<<endl;
		cout<<"q= "<<q<<endl;
	}

};

class gamma: public beta, public alpha
{
	int u,v;
public:
	gamma(int a, int b, float c): alpha(a*2), beta(c,c), u(a)
	{
	  v=b;
	}

	void show_gamma()
	{
		cout<<"u= "<<u<<endl;
		cout<<"v= "<<v<<endl;
	}

};

int main()
{
	gamma g(2, 4, 2.5);
	cout<<endl;

	g.show_alpha();
	g.show_beta();
	g.show_gamma();

	system("pause");
	return 0;
}

