#include <iostream>
#include <string>
#include "./clsPerson.c++"
using namespace std;

int main()
{   
    clsPerson Person;
    Person.setIFirstName();
    Person.setILastName();
    Person.setIFullName();
    Person.setIEmail();
    Person.setPhone();
    cout<<"_____________________________________"<<endl;
    cout<<Person.getFirstName();
    cout<<Person.getLastName();
    cout<<Person.getFullName();
    cout<<Person.getEmail();
    cout<<"Phone : "<<Person.gettPhone()<<endl;
    cout<<"_____________________________________"<<endl;
    Person.setSubject();
    cout<<Person.getSubject();

    
    return 0;
}
