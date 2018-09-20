#include<iostream>
using namespace std;
class student
{
 protected:
  char name[10];
  int rollno;
 public:
   void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Roll number: ";
        cin>>rollno;
    }
   void display()
    {
        cout<<"\n\nName:\t"<<name;
        cout<<"\nRoll number:\t"<<rollno;
    }
};

class marks:virtual public student
{
 private:
  int m1,m2,m3,m4,m5;
 public:
    void getmarks()
    {
        cout<<"\nEnter marks of 5 subjects: \n";
        cin>>m1>>m2>>m3>>m4>>m5;
    }
     void displaymks()
    {
       cout<<"\n\nYour marks are:\n\n";
       cout<<"Subject 1:\t"<<m1;
       cout<<"\nSubject 2:\t"<<m2;
       cout<<"\nSubject 3:\t"<<m3;
       cout<<"\nSubject 4:\t"<<m4;
       cout<<"\nSubject 5:\t"<<m5;
    }
    int common()
    {
        int to;
        to=m1+ m2+m3+m4+m5;
        return(to);
    }
};
class sports:virtual public student
{
private:
    int sptsmarks;
public:
    void getsportsmarks()
    {
        cout<<"Enter sports marks: ";
        cin>>sptsmarks;
    }
    int returnsptsmarks()
        {
            return(sptsmarks);
        }
    void dispsptsmarks()
    {
        cout<<"\nSports marks are:"<<sptsmarks;
    }

};
class result:public marks,public sports
{
private:
    float per;
    int total;
 public:
    void calculate()
    {
      total = common()+returnsptsmarks();
      per= total/6;
    }
    void displayall()
    {
        display();

        displaymks();
        dispsptsmarks();
        cout<<"\n\nTotal is: \t"<<total;
        cout<<"\nPercentage is: \t"<<per<<"%"<<endl;
    }
};
main()
{
    result t;
    t.getdata();
    t.getmarks();
    t.getsportsmarks();
    t.calculate();
    t.displayall();
}
