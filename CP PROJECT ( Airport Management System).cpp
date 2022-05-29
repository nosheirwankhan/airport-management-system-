#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdio.h>
using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~REGISTRATION FUNCTION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
char Register()
{ 
  string username,password,Full_Name,email;
  char input;

cout<<"   _____________________________________________________________________"<<endl;
cout<<"    ~ Welcome To JourneyFlight International Airport Registration Page ~ "<<endl;
cout<<"   _____________________________________________________________________"<<endl;
cout<<endl;

//~~~~~~~~~~~~~~~~~~~~~~~~USERNAME LOG~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
do
{
cin.ignore(100,'\n'); 
cout<<"Enter Full Name:"<<endl;
  getline(cin,Full_Name);
  
  
  cout<<"Enter Email:"<<endl;
  getline(cin,email);
  

cout<<"Enter Username For Registration:"<<endl;
getline(cin,username); 
 ofstream Username("Username",ios::app);
   Username<<username<<endl;
 if (!Username)
  {cout<<"File Not Created!!";}
  Username.close();
    
  
  
  
//~~~~~~~~~~~~~~~~~~~~~~PASSWORD LOG~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

 
cout<<"Enter Password For Registration:"<<endl;
getline(cin,password);

 ofstream Password("Password",ios::app);
   Password<<password<<endl;
   
  if (!Password)
  {cout<<"File Not Created!!";}
  Password.close();
  

 
  
cout<<"Are You Satisfied with Data (Y/N)"<<endl;
cin>>input;
}
while (input=='N'||input=='n');


 
//~~~~~~~~~~~~~~~~~SUCCESSFUL REGISTRATION~~~~~~~~~~~~~
 cout<<"Successfully Registered!!"<<endl;
 cout<<endl;
cout<<"  To Return to Main Menu Press Enter"<<endl;
cin.get();
return cin.get();
}






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~LOGIN FUNCTION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
char Login()
{ 

string User,Pass;
char confirm;
cout<<"   ________________________________________________________________"<<endl;
cout<<"      ~ Welcome To JourneyFlight International Airport Login Page ~ "<<endl;
cout<<"   ________________________________________________________________"<<endl;
cout<<endl;

do
{
   cin.ignore(100,'\n'); 
cout<<"Enter Username for Login:"<<endl;
  getline(cin,User);
 
  cout<<"Enter Password:"<<endl;
  getline(cin,Pass);

  
//~~~~USERNAME RETRIEVAL~~~~~
string U;
size_t pos;
  ifstream Username ("Username");
  if (Username.is_open())
  {
    while (Username.good())
   {
	 getline (Username,U);
    pos=U.find(User);
    if (pos!=string::npos)
   {
	 Username>>pos;
  break;
}
}
}
  else cout << "Unable to open file";

//~~~~~PASSWORD RETRIVEAL~~~~~ 
string P;
  ifstream Password ("Password");
  if (Password.is_open())
  { while (Password.good())
    {getline (Password,P);
    pos=P.find(Pass);
    if (pos!=string::npos)
    {
	Password>>pos;
    break;
}
}    
  }

  else {cout << "Unable to open file";}

cout<<"Do you Confirm entered Data (Y/N):"<<endl;
cin>>confirm;



//~~~~LOGIN VERIFICATION~~~~~
if (User==U&&Pass==P)
{ cout<<"Login Successful!!"<<endl;
  cout<<endl;
  system("PAUSE");
  return 1;}
else
{ cout<<"Login Failed Return to Main Menu"<<endl;}

     


cout<<endl;
cout<<"  To Return to Main Menu Press Enter"<<endl;
cin.get();
return cin.get();

 }
 while(confirm=='N'||confirm=='n');

}




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SUCCESSFUL LOGIN~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
char Login_Success()
{ char option;
  cout<<"      ________________________________________________________"<<endl;
  cout<<"                    ~~~~~~~~Welcome~~~~~~~~"<<endl;
  cout<<"      ________________________________________________________"<<endl;
  cout<<endl;
  cout<<"   Choose Any Menu To continue:"<<endl;
  cout<<"      1) Reserve A Flight"<<endl;
  cout<<"      2) Cancel Existing Reservation"<<endl;
  cout<<"      3) View Flight History"<<endl;
  cout<<"      4) Logout and Return to Main Menu"<<endl;
  cout<<endl;
  cout<<" \\ only \*Exit function\* Works :) \\"<<endl;
  cout<<endl;
  cout<<"Enter Your Choice:"<<endl;
  cin>>option;
  cout<<endl;
  return option;
}





//~~~~~~~~~~~~~FLIGHT SCHEDULE~~~~~~~~~~~~~~~~~~~~~~~
char Flight_Schedule()
{ 
int exit;
	cout<<"   __________________________________________________________________________"<<endl;
	cout<<"                    ~~~~~~~~~ FLIGHT SCHEDULE ~~~~~~~"<<endl;
	cout<<"   __________________________________________________________________________"<<endl;
	cout<<"LOCAL FLIGHTS:-"<<endl;
	cout<<"      :DESTINATION:                        :AVAILABLE TIMES:"<<endl;
cout<<endl;
	cout<<"  *ISLAMABAD-LAHORE                       9:00AM, 12:00PM, 7:00PM"<<endl;
	cout<<"  *ISLAMABAD-KARACHI                      10:00AM, 3:30PM, 7:30PM"<<endl;
    cout<<"  *ISLAMABAD-QUETTA                       11:00AM, 4:00PM, 8:00PM"<<endl;
	cout<<"  *ISLAMABAD-PESHAWAR                     7:00AM, 12:00PM, 2:00PM"<<endl;
	cout<<"  *ISLAMABAD-MULTAN                       6:30AM, 11:30AM, 3:00PM"<<endl;
	cout<<"  *ISLAMABAD-GAWADAR                       8:00AM, 5:00PM, 8:30PM"<<endl;
	cout<<endl;
	cout<<"INTERNATIONAL FLIGHTS:-"<<endl;
	cout<<"      :DESTINATION:                        :AVAILABLE TIMES:"<<endl;
cout<<endl;
	cout<<"  *ISLAMABAD-AMSTERDAM                    10:20AM, 11:30PM"<<endl;
	cout<<"  *ISLAMABAD-NEWYORK                        2:00AM, 5:00AM"<<endl;
	cout<<"  *ISLAMABAD-LONDON                        11:00PM, 2:00PM"<<endl;
	cout<<"  *ISLAMABAD-JEDDAH                       12:00AM, 12:30PM"<<endl;
	cout<<"  *ISLAMABAD-SYDNEY                         2:30AM, 3:30PM"<<endl;
	cout<<"  *ISLAMABAD-BEIJING                         4:30AM,5:30PM"<<endl;
	cout<<"  *ISLAMABAD-DUBAI                           1:00AM,9:00AM"<<endl;
cout<<endl;
cout<<"NOTE: For Bookings Please Register/Login and Access Through Login Landing Page "<<endl;
cout<<endl;
cout<<"  To Return to Main Menu Press Enter"<<endl;
cin.get();
return cin.get();	
}







//~~~~~~~~~~~~~FLIGHT TICKET PRICES~~~~~~~~~~~~~~~~~~~~~~~
char Ticket_Prices()
{ 
int exit;
	cout<<"   _____________________________________________________________"<<endl;
	cout<<"           ~~~~~~~~~ FLIGHT TICKET PRICES ~~~~~~~"<<endl;
	cout<<"   _____________________________________________________________"<<endl;
	cout<<"LOCAL FLIGHTS:-"<<endl;
	cout<<"      :DESTINATION:                        :TICKET PRICES:"<<endl;
cout<<endl;
	cout<<"  *ISLAMABAD-LAHORE                       Rs 25000"<<endl;
	cout<<"  *ISLAMABAD-KARACHI                      Rs 50000"<<endl;
    cout<<"  *ISLAMABAD-QUETTA                       Rs 40000"<<endl;
	cout<<"  *ISLAMABAD-PESHAWAR                     Rs 15000"<<endl;
	cout<<"  *ISLAMABAD-MULTAN                       Rs 30000"<<endl;
	cout<<"  *ISLAMABAD-GAWADAR                      Rs 45000"<<endl;
	cout<<endl;
	cout<<"INTERNATIONAL FLIGHTS:-"<<endl;
	cout<<"      :DESTINATION:                        :AVAILABLE TIMES:"<<endl;
cout<<endl;
	cout<<"  *ISLAMABAD-AMSTERDAM                    Rs 150,000"<<endl;
	cout<<"  *ISLAMABAD-NEWYORK                      Rs 250,000"<<endl;
	cout<<"  *ISLAMABAD-LONDON                       Rs 150,000"<<endl;
	cout<<"  *ISLAMABAD-JEDDAH                       Rs 100,000"<<endl;
	cout<<"  *ISLAMABAD-SYDNEY                       Rs 175,000"<<endl;
	cout<<"  *ISLAMABAD-BEIJING                      Rs 100,000"<<endl;
	cout<<"  *ISLAMABAD-DUBAI                        Rs 100,000"<<endl;
cout<<endl;
cout<<"NOTE: For Bookings Please Register/Login and Access Through Login Landing Page "<<endl;
cout<<endl;
cout<<"  To Return to Main Menu Press Enter"<<endl;
cin.get();
return cin.get();	
}







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DRIVER FUNCTION CALLING FUNCTIONS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main()
{ system("CLS"); 
int choice;
char reg=0,log=0,sched=0,price=0,logyes=0;
  menustart:
  cout<<"           ________________________________________________________"<<endl;
  cout<<"              Welcome To JourneyFlight International Airport"<<endl;
cout<<endl;
  cout<<"            \"Where Comfort of Your Journey is Our Destination\""<<endl;
  cout<<"           _____"<<endl;
  cout<<"          _\\ _~-\\___"<<endl;
  cout<<"  =  = ==(____AA____D"<<endl;
  cout<<"              \\_____\\___________________,-~~~~~~~`-.._"<<endl;
  cout<<"              /     o O o o o o O O o o o o o o O o  |\_"<<endl;
  cout<<"              `~-.__        ___..----..                  )"<<endl;
  cout<<"                    `---~~\\___________/------------`````"<<endl;
  cout<<"                    =  ===(_________D"<<endl;
  cout<<"           ________________________________________________________"<<endl;
  cout<<endl;
  
  cout<<"                ~~~~~ \" MAIN MENU \" ~~~~~"<<endl;
  cout<<endl;
  cout<<"                 :Press Key Number To Enter Required Menu:     "<<endl;
  cout<<endl;
  cout<<"                 1) Registration (For New Customers)"<<endl;
  cout<<"                 2) Login (For Existing Customers)"<<endl;
  cout<<"                 3) Available Flights"<<endl;
  cout<<"                 4) Ticket Price"<<endl;
  cout<<"                 5) Exit"<<endl;
  cin>>choice;
 
  system("CLS");

switch (choice)
   {
   	
   	//~~~~~~~~~~~~~~~~CALL REGISTER FUNCTION~~~~~~~~~~~~~~
	case 1:
		reg=Register();
		
	//~~~~RETURN TO MAIN MENU~~~
		if (reg=='\n')
     {system("CLS");
      goto menustart;}
		break;
		
		
		
		
		
		//~~~~~~~~~~~~~~~~~~CALL LOGIN FUNCTION~~~~~~~~~~~~~~
	case 2:
		 log=Login();
		 
	//~~~LOGIN FAILURE/RETURN TO MAIN MENU ~~~~	 
		if (log=='\n')
     {system("CLS");
      goto menustart;}
      
    //~~~LOGIN SUCCESS~~
      else if(log==1)
      { system("CLS");
	    logyes=Login_Success();
		 if (logyes=='4')
		 { system("CLS");
		  cout<<"Thank You For Logging In, You Will be Redirected to Main Menu"<<endl;
            cout<<endl;
            system("PAUSE");
            system("CLS");
            goto menustart;
		 }
		 }
		break;
		
		
		
		
		
		
	//~~~~~~~CALL SCHEDULE FUNCTION~~~~~~	
	case 3:
    	 sched=Flight_Schedule();
    	 
    //~~~~RETURN TO MAIN MENU~~~
	if (sched=='\n')
     {system("CLS");
      goto menustart;}
		break;
	
	
	
	
	
	//~~~~~~~~~~CALL TICKET PRICE FUNCTION~~~~~~~~
	case 4:
		  price=Ticket_Prices();
		  
	//~~~~RETURN TO MAIN MENU~~~
		  if (price=='\n')
     {system("CLS");
      goto menustart;}
		break;
	
	
	
	
	//~~~~~~~~~~~EXIT PROGRAM~~~~~~~~~~~~~~~~~~	
	case 5:
		system("CLS");
		cout<<"Thank You For Using Our Program"<<endl;
		cout<<endl;
		cout<<"This Program Was Created By"<<endl;
		cout<<"* Muhammad Basit Khiljee (212000)"<<endl;
		cout<<"* Muhammad Nosheirwan Kundi (210297)"<<endl;
		cout<<"* Shoaib Ashraf (211993)"<<endl;
	}
}
