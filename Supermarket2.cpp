#include <iostream>
using namespace std;

class Item
{
	public:
	string name;
	int price;
};

class Supermarket
{
	int lim=0,i,temp, checker=0, transaction_count=0;
	Item values[100];
	
	public:
	void additems()
	{
		checker++;
		temp=0;
		cout << "Enter no of items you wish to enter\n";
		cin >> temp;
		lim += temp;
		
		for(i=lim-temp; i< lim; i++)
		{
			cout << "Enter name of item \n";
			cin >> values[i].name;
			
			cout << "Enter price of item \n";
			cin >> values[i].price;
			cout << endl;
		}
		
	}

	void delete_item()
	{
		int index;
		for(i=lim-temp; i< lim; i++)
		{
			cout << i+1 << ") " << values[i].name <<"\n";	
		}

		cout << "Enter index of item you wish to delete\n";
		cin >> index;
		if(index > 0 && index <=lim)
		{
			for(int i=index-1; i < lim-1; i++)
			{
				values[i].name = values[i+1].name;
				values[i].price = values[i+1].price;
			}
			lim--;
		}
		else
		{
			cout << "invalid index\n";
			delete_item();
		}
	}

	void view_items()
	{
		if(checker==0)
		{
			cout << "no items to view, please add items\n";
		}

		else
		{
			for(i=0; i< lim; i++)
			{
				cout << "   " << "name" << "\t\t" << "price" <<"\n";
				cout << i+1 << ") " << values[i].name << "\t\t" << values[i].price <<"\n";	
			}
			cout << endl;
		}
	}

	void order_items()
	{
		int val,arr[50],coast=0,a;

		if(checker==0)
		{
			cout << "no items to buy, please add items\n";
		}

		else
		{
			cout << "Enter how many items you wish to order\n";
			cin >> val;

			for(i=0; i< lim; i++)
			{
				cout << "   " << "name" << "\t\t" << "price" <<"\n";
				cout << i+1 << ") " << values[i].name << "\t\t" << values[i].price <<"\n";	
			}

			cout << "Enter the index of items you wish to order\n";
			for(int i=0; i< val; i++)
			{
				cin >> arr[i];
			}

			for(int i=0; i< val; i++)
			{
				coast += values[arr[i]-1].price;
			}

			cout << "Total values for your order = " << coast << endl;
			transaction_count++;
		}
	}

	void transactions()
	{
		cout << "\nNo of transactions done so far = " << transaction_count << endl;
	}
};

int main()
{
	int option;
	Supermarket shop1;

	while(1)
	{
		cout << "Select options from below\n";
	cout << "1) add items\n2) view items\n3) order item\n4) print no of transactions\n5)delete items\n6) exit\n";
	cin >> option;
	
	switch(option)
	{
		case 1:
		shop1.additems();
		break;
		case 2:
		shop1.view_items();
		break;
		case 3:
		shop1.order_items();
		break;
		case 4:
		shop1.transactions();
		break;
		case 5:
		shop1.delete_item();
		break;
		case 6:
		exit(0);
		break;
		default:
		cout << "invalid option try again\n";

	}
	}

	return 0;
}
