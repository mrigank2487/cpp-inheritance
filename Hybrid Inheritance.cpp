#include<iostream>
#include<conio.h>
using namespace std;
class student
{
protected:
	char name[50];
	int rollno;
public:
	void getdata()
	{
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the Roll No: ";
		cin>>rollno;
	}
	void dispdata()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No: "<<rollno<<endl;
	}
};
class marks: public student
{
private:
	int m1,m2,m3,m4,m5;
public:
	void getmarks()
	{
		cout<<"Enter marks of 5 subjects: \n";
		cin>>m1>>m2>>m3>>m4>>m5;
	}
	int M1()
		{
			return m1;
	}
	int M2() 
		{
			return m2;
	}
	int M3()
		{
			return m3;
	}
	int M4()
		{
			return m4;
	}
	int M5()
		{
			return m5;
	}
	void dispmarks()
	{
		cout<<"Subject 1: "<<m1<<endl;
		cout<<"Subject 2: "<<m2<<endl;
		cout<<"Subject 3: "<<m3<<endl;
		cout<<"Subject 4: "<<m4<<endl;
		cout<<"Subject 5: "<<m5<<endl;
	}
};
class sports
{
private:
	int sptmks;
public:
	void getsptmks()
	{
		cout<<"Enter the sports marks \n";
		cin>>sptmks;
	}
	void dispsptmks()
	{
		cout<<"Sports: "<<sptmks;
	}
	int sptmkss()
		{
			return sptmks;
	}
};
class result: public marks,public sports
{
private:
	float total;
	float percentage;
public:
	void calculate();
	void displayall();
}r;
void result::calculate()
{
	total=M1()+M2()+M3()+M4()+M5()+sptmkss();
	percentage=total/6;
}
void result::displayall()
{
	dispdata();
	dispmarks();
	dispsptmks();
	cout<<"\nTotal: "<<total<<endl;
	cout<<"Percentage: "<<percentage<<"%"<<endl;
}
void main()
{
	r.getdata();
	r.getmarks();
	r.getsptmks();
	r.calculate();
	r.displayall();
	getch();
}

