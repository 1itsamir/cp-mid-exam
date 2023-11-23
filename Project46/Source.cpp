#include<iostream>
using namespace std;
int main()
{
	int initial_quantity, sold_quantity, current_quantity, t, y, restock_quantity, threshold_quantity = 12;
	char choice;
	cout << "enter initial quantity" << endl;
	cin >> initial_quantity;

	current_quantity = initial_quantity;
	if (true)
	{
		cout << "initial quantity is:" << current_quantity << endl;
		cout << "press s to sold R to re stock and e to exit" << endl;
		cout << "enter choice" << endl;

		cin >> choice;
		if (choice == 's')
		{
			cout << "enter sold quantity" << endl;
			cin >> sold_quantity;
			if (sold_quantity > current_quantity)
			{
				cout << "cant sell " << endl;

			}
			else
				t = current_quantity - sold_quantity;
			cout << "remain stock is " << t << endl;

		}
		else if (choice == 'r')    //r is restocking
		{
			cout << "enter how much to restock" << endl;
			cin >> restock_quantity;
			y = current_quantity + restock_quantity;
			cout << "remain stock is:" << y << endl;

		}
		else if (choice == 'e')    //e to exit
		{

			cout << "exit" << endl;

		}





		if (current_quantity < threshold_quantity)
		{

			cout << "wanring there is low stock left" << endl;
		}
		else
			cout << "so the remaining stock left is:" << current_quantity << endl;

	}
	return 0;
}
