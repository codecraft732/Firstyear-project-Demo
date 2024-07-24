//This is feature1 branch.
#include<iostream>
using namespace std;
class User{
    private:
    string name;
    string password;
    public:
   double balance=0;
   User(string n,string p){
    name=n;
    password=p;}
    bool checkname(string nam){
       if(nam==name)
       
       {cout<<" name ok ";
       return 1;
       }else{
        cout<<"   wrong name   "<<endl;
        return 0;
        }
    }
      bool checkpass(string pass){
       if(pass==password){
        cout<<" pass ok   ";
        return 1;
        }else{
            cout<<"   wrong password   ";
            return 0;
            }
    }
};
int startmenu(){
   
    cout<<"****main menu****"<<endl;
    cout<<"1- balance"<<endl;
    cout<<"2- deposite"<<endl;
    cout<<"3- withdraw"<<endl;
    int option;
    cout<<"4- exit"<<endl;
    cout<<"select option:";
    cin>>option;
    return option;
}
    
int main(){
    cout<<"****welcome to the atm application";
    User U1=User("alishba","key67");
    string n,p;
    cout<<"enter your name:"<<endl;
    cin>>n;
    cout<<"enter your password:"<<endl;
    cin>>p;
if(U1.checkname(n) && U1.checkpass(p)){
      Start:
int i;
i=startmenu();
switch (i){
    case 1:
    cout<<"your balance is "<<U1.balance<<endl;
    break;
    case 2:
    double dep;
    cout<<"enter deposite:";
    cin>>dep;
    U1.balance+= dep;
    break;
    case 3:
    double wd;
    cout<<"enter withdraw:";
        cin>>wd;
    	if(wd >= U1.balance)
			cout<<"insufficient fund"<<endl;
		else
           
		U1.balance-= wd;
		break;
    case 4:
    break;
}
} 

     cout<<"would u like to continue:";
     cout<<"1- yes:";
     cout<<"2- no:";
     int input;
     cout<<"enter input :";
     cin>>input;
   
    if(input ==  1)
    { 
        system("cls");
     goto Start;
     }
    
    
}
