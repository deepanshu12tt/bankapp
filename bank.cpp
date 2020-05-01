#include<iostream>
#include<iomanip>

	using namespace std;

	class bank
	{
		char name;
		int accno;
		char acctype;
		int bal;

		public :
		void deposit(void);
		void withdraw(void);
		void display(void);
		void balance(void);
	};

		void bank :: balance(void)
		{
			cout<<"Enter name:-"<<endl;
			cin>>name;
			cout<<"Enter Account number"<<endl;
			cin>>accno;
			cout<<"Enter Account type:-"<<endl;
			cin>>acctype;
			cout<<"Enter opening balance"<<endl;
			cin>>bal;
		}
		void bank :: deposit(void)
		{
			cout<<"Enter deposit amount"<<endl;
			int deposit=0;
			cin>>deposit;
			deposit=deposit+bal;
			cout<<"\n deposit balance="<<deposit;
			bal=deposit;
		}

			void bank :: withdraw(void)
			{
				int withdraw;
				cout<<"Enter balance amount"<<bal<<endl;
				cout<<"Enter withdraw amount"<<endl;
				cin>>withdraw;
				bal=bal-withdraw;
				cout<<"After withdraw bal"<<bal<<endl;

			}

			void bank :: display(void)
			{
				cout<<setw(50)<<"details"<<endl;
				cout<<setw(50)<<"name"<<name<<endl;
				cout<<setw(50)<<"accno"<<accno<<endl;
				cout<<setw(50)<<"acctype"<<acctype<<endl;
				cout<<setw(50)<<"balance amount"<<bal<<endl;
			}

			int main()
			{
				bank o1;
				int choice;
				do
				{
					cout<<"\n choice\n";
					cout<<"1) To assign initial value"<<endl;
					cout<<"2)To deposit"<<endl;
					cout<<"3)To withdraw"<<endl;
					cout<<"4)To display all details"<<endl;
					cout<<"5) EXIT "<<endl;
					cout<<"Enter your choice:-"<<endl;
					cin>>choice;
					switch(choice)
					{
						case 1: o1.balance();
						break;
						case 2: o1.deposit();
						break;
						case 3: o1.withdraw();
						break;
						case 4: o1.display();
						break;
					
						
					}
				}
				while(1);
				return 0;
			}
	