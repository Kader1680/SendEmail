
#include <iostream>
#include <string>
using namespace std;


class clsPerson{
        private:
            string FullName, LastName, FirstName, Email, Subject, Message;
            int Phone, Id;
        public:
            // inisilaize contstructor
            clsPerson(){
                // set default value on attrinute member
                FullName =  ""; 
                LastName =  ""; 
                FirstName =  "";
                Email = "";
                Phone = 0;
                Id = 0;
            }
            void setIFullName(){
                    cout<<"Enter Full Name ";
                    cin>>FullName;
                    FullName = FullName;
            }
             void setILastName(){
                    cout<<"Enter LastName ";
                    cin>>LastName;
                    LastName = LastName;
            }
             void setIFirstName(){
                    cout<<"Enter FirstName ";
                    cin>>FirstName;
                    FirstName = FirstName;
            }
             void setIEmail(){
                    cout<<"Enter Email ";
                    cin>>Email;
                    Email = Email;
            }
             void setPhone(){
                    cout<<"Enter Phone ";
                    cin>>Phone;
                    Phone = Phone;
            }

            void setSubject(){
                    cout<<"Send Subject & Deatils Email";
                    cin>>Subject;
                    Subject = Subject;
            }
            string getFullName(){
                    return "FullName : " + FullName + "\n";
            }
            string getLastName(){
                    return "LastName : " + LastName  + "\n";
            }
            string getFirstName(){
                    return "FirstName : " + FirstName  + "\n";
            }
            string getEmail(){
                    return "Email : " + Email  + "\n";
            }
            int gettPhone(){
                   return Phone;
            }
            string getsetSubject(){
                    return "The Email Sended Sucessfuly To Email " + Email  + "\n";
            }
};

