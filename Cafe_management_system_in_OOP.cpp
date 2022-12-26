#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;
/*This class is responsible for menu ordering, bill generation
 and for keeping the record of all sales*/
class Menu {
private:
	fstream file;
	fstream sales;
public:
	//The menu of the cafe is shown using this function
	void showmenu()
	{
		cout << "_________________" << endl;
		cout << "                      MENU                     " << endl;
		cout << "_________________" << endl;
		cout << "\n";
		cout << "**Drinks**" << endl;
		cout << "1.Softdrink                Rs.30" << endl;
		cout << "2.Tea                      Rs.20" << endl;
		cout << "3.Coffee                   Rs.50" << endl;
		cout << "4.Hot Chocolate            Rs.100" << endl;
		cout << "5.Milkshake                Rs.140" << endl;
		cout << "\n";
		cout << "**Appetizers**" << endl;
		cout << "6.Cheese Balls             Rs.200" << endl;
		cout << "7.Fries                    Rs.50" << endl;
		cout << "8.Mozarella Sticks         Rs.220" << endl;
		cout << "9.Salad                    Rs.70" << endl;
		cout << "\n";
		cout << "**Fast Food**" << endl;
		cout << "10.Chicken Burger          Rs.180" << endl;
		cout << "11.Beef Burger             Rs.300" << endl;
		cout << "12.Shawarma                Rs.80 " << endl;
		cout << "13.Pizza                   Rs.550" << endl;
		cout << "14.Platter                 Rs.120" << endl;
		cout << "\n";
		cout << "**Desserts**" << endl;
		cout << "15.Icecream                Rs.50" << endl;
		cout << "16.Lavacake                Rs.330" << endl;
		cout << "17.Trifle                  Rs.120" << endl;
		cout << "18.Brownie                 Rs.80" << endl;
		cout << "\n\n";
		cout << "0.Total Bill" << endl;
	}
	/* This function generates the bill and also saves
	all the orders in a file*/
	void bill()
	{
		int choice;
		int total = 0;
		char ch;
		file.open("file.txt", ios::out);
		sales.open("sales.txt", ios::app);
		while (1)
		{
			cin >> choice;
			if (choice == 1)
			{
				file << "Soft Drink\t\tRs.30" << endl;
				sales << "Soft Drink\t\tRs.30" << endl;
				total = total + 30;
			}
			if (choice == 2)
			{
				file << "Tea\t\t\tRs.20" << endl;
				sales << "Tea\t\t\tRs.20" << endl;
				total = total + 20;

			}
			if (choice == 3)
			{
				file << "Coffee\t\t\tRs.50" << endl;
				sales << "Coffee\t\t\tRs.50" << endl;
				total = total + 50;
			}
			if (choice == 4)
			{
				file << "Hot Chocolate\t\tRs.100" << endl;
				sales << "Hot Chocolate\t\tRs.100" << endl;
				total = total + 100;
			}
			if (choice == 5)
			{
				file << "Milkshake\t\tRs.140" << endl;
				sales << "Milkshake\t\tRs.140" << endl;
				total = total + 140;
			}
			if (choice == 6)
			{
				file << "Cheese Balls\t\tRs.200" << endl;
				sales << "Cheese Balls\t\tRs.200" << endl;
				total = total + 200;
			}
			if (choice == 7)
			{
				file << "Fries\t\t\tRs.50" << endl;
				sales << "Fries\t\t\tRs.50" << endl;
				total = total + 50;
			}
			if (choice == 8)
			{
				file << "Mozarella Sticks\tRs220" << endl;
				sales << "Mozarella Sticks\tRs220" << endl;
				total = total + 220;
			}
			if (choice == 9)
			{
				file << "Salad\t\t\tRs.70" << endl;
				sales << "Salad\t\t\tRs.70" << endl;
				total = total + 70;
			}
			if (choice == 10)
			{
				file << "Chicken Burger\t\tRs.180" << endl;
				sales << "Chicken Burger\t\tRs.180" << endl;
				total = total + 180;
			}
			if (choice == 11)
			{
				file << "Beef Burger\t\tRs.300" << endl;
				sales << "Beef Burger\t\tRs.300" << endl;
				total = total + 300;
			}
			if (choice == 12)
			{
				file << "Shawarma\t\tRs.80" << endl;
				sales << "Shawarma\t\tRs.80" << endl;
				total = total + 80;
			}
			if (choice == 13)
			{
				file << "Pizza\t\t\tRs.550" << endl;
				sales << "Pizza\t\t\tRs.550" << endl;
				total = total + 550;
			}
			if (choice == 14)
			{
				file << "Platter\t\t\tRs.120" << endl;
				sales << "Platter\t\t\tRs.120" << endl;
				total = total + 120;
			}
			if (choice == 15)
			{
				file << "Icecream\t\tRs.50" << endl;
				sales << "Icecream\t\tRs.50" << endl;
				total = total + 50;
			}
			if (choice == 16)
			{
				file << "Lavacake\t\tRs.330" << endl;
				sales << "Lavacake\t\tRs.330" << endl;
				total = total + 330;
			}
			if (choice == 17)
			{
				file << "Trifle\t\t\tRs.120" << endl;
				sales << "Trifle\t\t\tRs.120" << endl;
				total = total + 120;
			}
			if (choice == 18)
			{
				file << "Brownie\t\t\tRs.80" << endl;
				sales << "Brownie\t\t\tRs.80" << endl;
				total = total + 80;
			}
			if (choice == 0)
			{
				file.close();
				sales << "\nTotal Bill: " << total << endl;
				sales << "_________________" << endl;
				sales << "\n";
				sales.close();
				system("CLS");
				cout << "_________________" << endl;
				cout << "                      Bill                     " << endl;
				cout << "_________________" << endl;
				cout << "\n";
				file.open("file.txt", ios::in);
				while (!file.eof())
				{

					file.get(ch);
					cout << ch;

				}
				file.clear();
				file.close();
				cout << "Total bill: " << total << endl;
				cout << "\n\n\n";
				total = 0;
				break;
			}
		}
		_getch();
		system("CLS");
	}
	//This function is being used to show total sales
	void totalsales()
	{
		char ch;
		cout << "                 Total sales                     " << endl;
		cout << "_________________" << endl;
		cout << "\n";
		sales.open("sales.txt", ios::in);
		while (!sales.eof())
		{
			sales.get(ch);
			cout << ch;
		}
		sales.close();
		_getch();
		system("CLS");
	}
};
//This is the base class of the inheritance
class Employee
{
protected:
	string fname, sname;
	int salary;
	long phone;
	fstream Waiters;
	fstream Receptionists;
public:
	Employee() :salary(25000) {}
	virtual int calculatesalary() = 0;	//Pure virtual function
	virtual void getinfo() = 0;                        //Pure virtual function
	virtual void showrecords() = 0;              //Pure virtual function
};
//Derived class inherited from the base class Employee
class Waiter :public Employee
{
protected:
	int waiterID;
	int tableServed;
	int TS;
public:
	Waiter() :tableServed(100) {}
	int calculatesalary()
	{
		int temp;
		temp = salary + (tableServed * TS);
		return temp;
	}
	//Saves the data in a file
	void getinfo()
	{
		Waiters.open("Waiters.txt", ios::app);
		cout << "Enter the information of the waiter\n" << endl;
		cout << "Enter name of the waiter: ";
		cin >> fname >> sname;
		Waiters << "Waiter's name: " << fname << " " << sname << endl;
		cout << "Enter phone number: ";
		cin >> phone;
		Waiters << "Phone number: " << phone << endl;
		cout << "Enter ID: ";
		cin >> waiterID;
		Waiters << "Waiter's ID: " << waiterID << endl;
		cout << "Enter the number of tables he has served: ";
		cin >> TS;
		Waiters << "Tables served: " << TS << endl;
		Waiters << "Basic salary: " << salary << endl;
		Waiters << "Salary with bonus: " << calculatesalary() << endl;
		Waiters << "_________________" << endl;
		Waiters << "\n";
		Waiters.close();
		_getch();
		system("CLS");
	}
	//Shows record of all waiters	
	void showrecords()
	{
		char ch;
		cout << "               List of Waiters                     " << endl;
		cout << "_________________" << endl;
		cout << "\n";
		Waiters.open("Waiters.txt", ios::in);
		while (!Waiters.eof())
		{
			Waiters.get(ch);
			cout << ch;
		}
		Waiters.close();
		_getch();
		system("CLS");
	}
};
//Derived class inherited from the base class Employee
class Receptionist :public Employee
{
protected:
	int RecpID;
	int OrderTaken;
	int OT;
public:
	Receptionist() :OrderTaken(50) {}
	int calculatesalary()
	{
		int temp;
		temp = salary + (OrderTaken * OT);
		return temp;
	}
	//Saves the data in a file
	void getinfo()
	{
		Receptionists.open("Receptionists.txt", ios::app);
		cout << "Enter the information of the Receptionist\n" << endl;
		cout << "Enter name of the receptionist: ";
		cin >> fname >> sname;
		Receptionists << "Receptionists's name: " << fname << " " << sname << endl;
		cout << "Enter phone number: ";
		cin >> phone;
		Receptionists << "Phone number: " << phone << endl;
		cout << "Enter ID: ";
		cin >> RecpID;
		Receptionists << "Receptionist's ID: " << RecpID << endl;
		cout << "Enter the number of orders he has taken: ";
		cin >> OT;
		Receptionists << "Orders taken: " << OT << endl;
		Receptionists << "Basic salary: " << salary << endl;
		Receptionists << "Salary with bonus: " << calculatesalary() << endl;
		Receptionists << "_________________" << endl;
		Receptionists << "\n";
		Receptionists.close();
		_getch();
		system("CLS");
	}
	//Shows record of all receptionists
	void showrecords()
	{
		char ch;
		cout << "            List of Receptionists                     " << endl;
		cout << "_________________" << endl;
		cout << "\n";
		Receptionists.open("Receptionists.txt", ios::in);
		while (!Receptionists.eof())
		{
			Receptionists.get(ch);
			cout << ch;
		}
		Receptionists.close();
		_getch();
		system("CLS");
	}
};
/* Composite class which clearly shows that the cafe has a menu
and it has employees. Polymorphism is done in this class*/
class Cafe {
	Menu m;
	Employee* e;
public:
	void mainmenu()
	{
		char choice;
		cout << setw(45) << "CAFE X2\n\n" << endl;
		cout << setw(40) << "1.Place an order" << endl;
		cout << setw(62) << "---------------------------------------" << endl;
		cout << setw(42) << "2.View total sales" << endl;
		cout << setw(62) << "---------------------------------------" << endl;
		cout << setw(50) << "3.Enter record of a waiter" << endl;
		cout << setw(62) << "---------------------------------------" << endl;
		cout << setw(56) << "4.Enter record of a receptionist" << endl;
		cout << setw(62) << "---------------------------------------" << endl;
		cout << setw(53) << "5.View records of all waiters" << endl;
		cout << setw(62) << "---------------------------------------" << endl;
		cout << setw(59) << "6.View records of all receptionists" << endl;
		cout << setw(62) << "---------------------------------------" << endl;
		cout << setw(30) << "7.Exit" << endl;
		cout << setw(62) << "---------------------------------------" << endl;
		choice = getch();
		system("CLS");
		if (choice == '1')
			this->showMenu();
		if (choice == '2')
			this->totalSales();
		if (choice == '3')
		{
			e = new Waiter;
			e->getinfo();
		}
		if (choice == '4')
		{
			e = new Receptionist;
			e->getinfo();
		}
		if (choice == '5')
		{
			e = new Waiter;
			e->showrecords();
		}
		if (choice == '6')
		{
			e = new Receptionist;
			e->showrecords();
		}
		if (choice == '7')
			exit(0);
	}
	void showMenu()
	{
		m.showmenu();
		m.bill();
	}
	void totalSales()
	{
		m.totalsales();
	}
};
int main()
{
	system("color 0A");
	Cafe c;
	while (1)
	{
		c.mainmenu();
	}
}
