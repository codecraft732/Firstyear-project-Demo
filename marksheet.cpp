#include<iostream>
using namespace std;
class Marksheet{
    private:
    float subjects[5];
  float percentage;
  int total_marks=0;
  int marks[5];
    string name;
    int rollno;
  public:
   void getdata(){
 
     cout<<"enter your name:";
      getline(cin, name);
      cout<<"enter your roll.no:";
      cin>>rollno;
      cout<<endl<<"enter marks for 5 subjects :";
        for(int i=0;i<5;i++){
            cin>>marks[i];
            total_marks += (marks[i]);
          
    }
    
      percentage=(static_cast<float>(total_marks) /500)*100;
    }
   
    void display(){
        cout<<endl<<"********";      
      
      cout<<" name:"<<name<<endl;
      cout <<" roll.no:"<<rollno<<endl;
    
    
     cout<<endl<<"***marks obtained***"<<endl;
       
        for(int i=0;i<5;i++){
            cout<<" subject "<<i+1<<":"<<marks[i]<<endl;   
        }
          cout<<endl<<"total_marks = "<<total_marks;
            cout<<endl<<"percentage = "<<percentage<<endl;    
    }
     
    

};
int main(){
   
     Marksheet student;
     
     student.getdata();
      cout<<endl<<"generating marksheet:"<<endl;
    student.display();

     return 0;
    
}