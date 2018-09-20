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
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Roll No: ";
		cin>>rollno;
	}
	void dispdata()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No: "<<rollno<<endl;
	}
};
class marks: public  student
{
private:
	int m1,m2,m3,m4,m5;
public:
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
	void getmarks()
	{
		cout<<"Enter the marks of 5 subjects: \n";
		cin>>m1>>m2>>m3>>m4>>m5;
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
class result: public marks
{
private:
	float total;  
	float percentage;
public:
	void calculate();
	void displayall();
}r;
void main()
{
	r.getdata();
	r.getmarks();
	r.calculate();
	r.displayall();
	getch();
}
void result::calculate()
{
	total=M1()+M2()+M3()+M4()+M5();
	percentage=(total/500)*100;
}
void result::displayall()
{
	dispdata();
	dispmarks();
	cout<<"\nTotal: "<<total<<endl;
	cout<<"Percentage: "<<percentage<<"%"<<endl;
}