#include <iostream>
#include <string>
using namespace std;

class Student{
  private:
    int student_number;
    string student_name;
    int phone_number;
  public:
    int x = student_number;
    string y = student_name;
    int z = phone_number;
    

  
};
int main(){
  Student student2;
  Student student1;
  int class_num;
  int whatdoing;
  cout<<"WELCOME TO TOPHER ACADEMY"<<endl;
  cout<<"What do you want to do?-----Enter 1 for adding student data ____Enter 2 for viewing student details"<<endl;
  cin>>whatdoing;
  if(whatdoing==1){
    cout<<"Enter you class number: "<<endl;
    cin>>class_num;
    if(class_num==1){
      
      cout<<"enter your school ID  "<<endl;
      cin>>student1.x;
      cout<<"enter your name "<<endl;
      cin>>student1.y;
      cout<<"enter your phone number "<<endl;
      cin>>student1.z;
      }else if(class_num==2){
        
        cout<<"enter your school ID  "<<endl;
        cin>>student2.x;
        cout<<"enter your name "<<endl;
        cin>>student2.y;
        cout<<"enter your phone number "<<endl;
        cin>>student2.z;
        }
}else if(whatdoing==2){
  cout<<"Enter your class number";
  cin>>class_num;
  if(class_num==1){
    cout<<"STUDENT ID NO: "<<student1.x<<" STUDENT NAME: "<<student1.y<<" PHONE NUMBER: "<<student1.z<<endl;
  }
  else if(class_num==2){
    cout<<"STUDENT ID NO: "<<student2.x<<" STUDENT NAME: "<<student2.y<<" PHONE NUMBER: "<<student2.z<<endl;
  }
}
   
  
  return 0;
}