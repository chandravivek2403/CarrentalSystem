#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>

//Brought To You by code-projects.org
// included required library files
using namespace std;
class customer // customer class
{

	public:
	string customername;
    string carmodel;
    string carnumber;
    char data;
    // variables defined in this class in public mode.
};
class rent : public customer // inhereted class from customer class
{
	public:
	int days=0,rentalfee=0; // additional int vatiables defined
	void data()
	{
		int login();
	login();
	cout << "\t\t\t\tPlease Enter your Name: "; //taking data from the user
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl; //giving user a choice to select among three different models
        cout<<"\t\t\t\tChoose which segment of car you want"<<endl;
        cout<<"\t\t\t\tEnter 'A' for sedan type car ."<<endl;
        cout<<"\t\t\t\tEnter 'B' for XUV type car."<<endl;
        cout<<"\t\t\t\tEnter 'C' for MPV type car."<<endl;
        cout<<"\t\t\t\tEnter 'D' for hatchback type car."<<endl;
        cout<<"\t\t\t\tEnter 'E' for MicroSUV type car."<<endl;
        cout<<"\t\t\t\tEnter 'F' for Traveller type car."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A")
 {
 	system("CLS");

		cout<<"You have choosed sedan type car"<<endl;
		cout<<"car name: hyundai verna"<<endl;
		cout<<"car number:AP27BF1599"<<endl;
		cout<<"car model:sedan"<<endl;
		cout<<"car mileage:18KMPL"<<endl;
		cout<<"price per day:800"<<endl;
		cout<<"Number of seats:5"<<endl;

sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");
        cout<<"You have choosed XUV type car"<<endl;
		cout<<"car name: Scarpio"<<endl;
		cout<<"car number:AP27TV7899"<<endl;
		cout<<"car model:XUV"<<endl;
		cout<<"car mileage:10KMPL"<<endl;
		cout<<"price per day:1000"<<endl;
		cout<<"Number of seats:8"<<endl;
     sleep(2);
 }
 if(carmodel=="C")
 {
 	system("CLS");
	    cout<<"You have choosed MPV type car"<<endl;
		cout<<"car name: Innova crysta"<<endl;
		cout<<"car number:AP27TV4277"<<endl;
		cout<<"car model:MPV"<<endl;
		cout<<"car mileage:13KMPL"<<endl;
		cout<<"price per day:1500"<<endl;
		cout<<"Number of seats:7"<<endl;
     sleep(2);
}
if(carmodel=="D")
{

    system("CLS");
    cout<<"You have choosed hatchbatch type car"<<endl;
		cout<<"car name: hyundai i20"<<endl;
		cout<<"car number:AP27TV9299"<<endl;
		cout<<"car model:hatchbatch"<<endl;
		cout<<"car mileage:24KMPL"<<endl;
		cout<<"price per day:700"<<endl;
		cout<<"Number of seats:5"<<endl;
		sleep(2);

}
 if(carmodel=="E")
 {
 	system("CLS");

		cout<<"You have choosed Micro SUV type car"<<endl;
		cout<<"car name: venue"<<endl;
		cout<<"car number:AP27HK2739"<<endl;
		cout<<"car model:micro suv"<<endl;
		cout<<"car mileage:16KMPL"<<endl;
		cout<<"price per day:600"<<endl;
		cout<<"Number of seats:5"<<endl;

sleep(2);
  }
  if(carmodel=="F")
  {
  	system("CLS");
        cout<<"You have choosed TRAVELLER type car"<<endl;
		cout<<"car name: Tempo"<<endl;
		cout<<"car number:AP27TV7777"<<endl;
		cout<<"car model:traveller"<<endl;
		cout<<"car mileage:5KMPL"<<endl;
		cout<<"price per day:2000"<<endl;
		cout<<"Number of seats:12"<<endl;
     sleep(2);
 }
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="D" && carmodel !="E")

      cout<<"Invaild Car Model. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" &&  carmodel !="D" && carmodel !="E" && carmodel !="F");
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;
	//getting data from user related to rental service
    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*800;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*1000;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*1500;
        if(carmodel == "D" ||carmodel=="d")
        rentalfee=days*700;
        if(carmodel == "E" ||carmodel=="e")
        rentalfee=days*600;
        if(carmodel == "F" ||carmodel=="f")
        rentalfee=days*2000;
    }
void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ____________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ____________________"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	Thank you and visit again"<<endl;
    cout << "\t\t	Have a nice day"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;

    system("PAUSE");

    system ("CLS");
}
};
int main()
{
rent obj2;
//object created for rent class and further member functions are called
obj2.data();
obj2.calculate();
obj2.showrent();

return 0; //end of the program
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch=_getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
