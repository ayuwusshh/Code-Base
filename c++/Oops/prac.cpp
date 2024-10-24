#include<iostream>
using namespace std;
class Student
{
private:
   int roll;
   string name;
   int mathMark;
   int phyMark;
   int chemMark;
public:
    Student(int r,string n,int m,int p,int c){
        roll=r;
        name=n;
        mathMark=m;
        phyMark=p;
        chemMark=c;
    }
    int total(){
        return mathMark+phyMark+chemMark;
    }
    char Grade(){
        float avg=total()/3;
        if (avg>60)
        {
            return 'A';
        }
        else if (avg>=40 && avg<=60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }   
    }
};
int main(){
    int roll;
    string name;
    int m,p,c;
     cout<<"Enter the Roll No. ";
    cin>>roll;
    cout<<"Enter the name"<<" ";
    cin>>name;
    getline(cin,name);
    cout<<"Enter the 3 subject Marks "<<endl;
    cin>>m>>p>>c;
     Student s(roll,name,m,p,c);
    cout<<"Total Marks of"<<name<<" is "<<s.total()<<" "<<endl;
    cout<<"Grade of Student is "<<s.Grade();
}
