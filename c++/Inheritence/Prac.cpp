/*
#include <iostream>
#include<string>
using namespace std;
class Employee
{
private:
    int id;
    string name;

public:
    Employee(int empId, string empName)
    {
        id=empId;
        name=empName;
    }
    int getId(){return id;}
    string getName(){return name;}
};
class FullTimeEmployee: public Employee{
    private:
    int salary;
    public:
    FullTimeEmployee(int empId, string empName, int empSalary):Employee(empId, empName){
        salary=empSalary;
    }
    int getSalary(){return salary;}
};
class PartTimeEmployee: public Employee{
    private:
    int wage;
    public:
    PartTimeEmployee(int empId, string empName, int empWage):Employee(empId, empName){
        wage=empWage;
    }
    int getWage(){return wage;}
};
int main(){
    FullTimeEmployee fullTimeEmployee(156,"Ayush",89000);
    PartTimeEmployee partTimeEmployee(165,"Singh",59000);
    cout<<fullTimeEmployee.getName()<<" ";
    cout<<fullTimeEmployee.getSalary()<<endl;
    cout<<partTimeEmployee.getName()<<" ";
    cout<<partTimeEmployee.getWage()<<endl;
}
*/
#include<iostream>
using namespace std;
class Employee{
    private:
    int id;
    string name;
    public:
    Employee(int empId,string empName){
        id=empId;
        name=empName;
    }
    int getId(){return id;}
    string getName(){return name;}
};
class Full:public Employee{
    private:
    double salary;
    public:
    Full(int empId,string empName,double empSal):Employee(empId,empName){
        salary=empSal;
    }
    double getSalary(){return salary;}
};
class Part:public Employee{
    private:
    double wage;
    public:
    Part(int empId,string empName,double empWage):Employee(empId,empName){
        wage=empWage;
    }
    double getWage(){return wage;}
};
int main(){
    Full p1(1,"Ayush",85000.56);
    Part p2(2,"Batman",5500.38);
    cout<<"Salary of "<<p1.getName()<<" is "<<p1.getSalary()<<endl;
    cout<<"Wage of "<<p2.getName()<<" is "<<p2.getWage()<<endl;
    return 0;
}