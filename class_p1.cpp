#include<iostream>
#include<string.h>
using namespace std;

class employee
{
    public:

    string name;
    int id,salary;

    employee(int id,string name, int salary)
    {
        this->id=id;
        this->name=name;
        this->salary=salary;
    }

    int display()
    {
        cout<<"ID     = "<<this->id<<endl;
        cout<<"NAME   = "<<this->name<<endl;
        cout<<"SALARY = "<<this->salary<<endl;
    }
};

int main()
{
    employee e1(1,"Rangani Krushank",300000);
    employee e2(2,"Kaniya  Rushil",200000);
    e1.display();
    cout<<"______________________________________________"<<endl;
    e2.display();

    return 0;
}