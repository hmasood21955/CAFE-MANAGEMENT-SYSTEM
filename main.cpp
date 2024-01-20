#include<iostream>
using namespace std;
int main()
{

	int id1 = 9631, id2 = 5324, id = 0, swtch = 0, itm[100], trans = 0, n, check, option, option1, item_price, newPrice, item_quantity, newQuantity,
		price[10] = { 30,40,40,40,10,30,70,100,100,50 }, quantity[10] = { 100,50,40,75,60,30,80,80,85,80 };
	

	cout << "                    CAFE MANAGEMENT SYSTEM                  " << endl;
	cout << endl;
	cout << endl;

	do {                        //loop for switching sign-in
		do {                       //loop for correct ID input
			cout << "Please enter your ID: ";
			cin >> id;     //9631 and 5324
			if (id == id1)
			{
				cout << "Employee 1. Signed-in" << endl;
				cout << endl;
				break;
			}
			else if (id == id2)
			{
				cout << "Employee 2. Signed-in" << endl;
				cout << endl;
				break;
			}
			else
			{
				cout << "Please enter correct ID." << endl;
				cout << endl;
			}

		} while (id != id1, id2);

		cout << endl;
		cout << "Enter 1 to Update the Price and Quantity of Items:" << endl;
		cout << "Enter 2 to Serve the Students:" << endl;
		cin >> option;
		if (option == 1)
		{
			cout << endl;

			cout << "===============\\CAFE MENU//=================" << endl;
			cout << " Sr no. | Name        | Price  | Quantity    " << endl;
			cout << " 1.     | Tea         | Rs." << price[0] << "  |" << quantity[0] << " cups     " << endl;
			cout << " 2.     | Small Pizza | Rs." << price[1] << "  |" << quantity[1] << endl;
			cout << " 3.     | Patties     | Rs." << price[2] << "  |" << quantity[2] << endl;
			cout << " 4.     | Pastry      | Rs." << price[3] << "  |" << quantity[3] << endl;
			cout << " 5.     | Samosa      | Rs." << price[4] << "  |" << quantity[4] << endl;
			cout << " 6.     | Green Salad | Rs." << price[5] << "  |" << quantity[5] << endl;
			cout << " 7.     | Sandwich    | Rs." << price[6] << "  |" << quantity[6] << endl;
			cout << " 8.     | Burger      | Rs." << price[7] << " |" << quantity[7] << endl;
			cout << " 9.     | Fries       | Rs." << price[8] << " |" << quantity[8] << " packets  " << endl;
			cout << " 10.    | Coffee      | Rs." << price[9] << "  |" << quantity[9] << " cups     " << endl;
			cout << "=============================================" << endl;
			cout << endl;

			cout << "What You want to Update Price Or Quantity" << endl;
			cout << "Press 1 to Update Price of Item:" << endl;
			cout << "Press 2 to Update Quantity of Item:" << endl;
			cin >> option1;
			if (option1 == 1)
			{
				cout << "Which Item's Price You want to update:";
				cin >> item_price;
				cout << "Enter New Price:";
				cin >> newPrice;

				price[item_price - 1] = newPrice;
			}
			if (option1 == 2)
			{
				cout << "Which Item's Quantity You want to update:";
				cin >> item_quantity;
				cout << "Enter New Quantity:";
				cin >> newQuantity;
				quantity[item_quantity - 1] = newQuantity;
			}
			cout << "===============\\CAFE MENU After Update//=================" << endl;
			cout << " Sr no. | Name        | Price  | Quantity    " << endl;
			cout << " 1.     | Tea         | Rs." << price[0] << "  |" << quantity[0] << " cups     " << endl;
			cout << " 2.     | Small Pizza | Rs." << price[1] << "  |" << quantity[1] << endl;
			cout << " 3.     | Patties     | Rs." << price[2] << "  |" << quantity[2] << endl;
			cout << " 4.     | Pastry      | Rs." << price[3] << "  |" << quantity[3] << endl;
			cout << " 5.     | Samosa      | Rs." << price[4] << "  |" << quantity[4] << endl;
			cout << " 6.     | Green Salad | Rs." << price[5] << "  |" << quantity[5] << endl;
			cout << " 7.     | Sandwich    | Rs." << price[6] << "  |" << quantity[6] << endl;
			cout << " 8.     | Burger      | Rs." << price[7] << " |" << quantity[7] << endl;
			cout << " 9.     | Fries       | Rs." << price[8] << " |" << quantity[8] << " packets  " << endl;
			cout << " 10.    | Coffee      | Rs." << price[9] << "  |" << quantity[9] << " cups     " << endl;
			cout << "=============================================" << endl;
			cout << endl;

		}
		cout << "Enter number of students to be served: ";
		cin >> n;
		cout << endl;
		for (int j = 1; j <= n; j++)
		{
			cout << endl;

			cout << "===============\\CAFE MENU//=================" << endl;
			cout << " Sr no. | Name        | Price  | Quantity    " << endl;
			cout << " 1.     | Tea         | Rs." << price[0] << "  |" << quantity[0] << " cups     " << endl;
			cout << " 2.     | Small Pizza | Rs." << price[1] << "  |" << quantity[1] << endl;
			cout << " 3.     | Patties     | Rs." << price[2] << "  |" << quantity[2] << endl;
			cout << " 4.     | Pastry      | Rs." << price[3] << "  |" << quantity[3] << endl;
			cout << " 5.     | Samosa      | Rs." << price[4] << "  |" << quantity[4] << endl;
			cout << " 6.     | Green Salad | Rs." << price[5] << "  |" << quantity[5] << endl;
			cout << " 7.     | Sandwich    | Rs." << price[6] << "  |" << quantity[6] << endl;
			cout << " 8.     | Burger      | Rs." << price[7] << " |" << quantity[7] << endl;
			cout << " 9.     | Fries       | Rs." << price[8] << " |" << quantity[8] << " packets  " << endl;
			cout << " 10.    | Coffee      | Rs." << price[9] << "  |" << quantity[9] << " cups     " << endl;
			cout << "=============================================" << endl;
			cout << endl;


			cout << "Select any two items from the menu: " << endl;
			for (int i = 1; i <= 2; i++)
			{
				cin >> itm[i];
				check = itm[i];
				if (check > 10 || check < 1)  //applying condition for correct item number input from the menu
				{
					cout << "Enter correct item serial no." << endl;
					i--;
				}
				trans++;  //to count transaction per item. 1 item = 1 transaction

			}
			cout << endl;
			cout << "You have selected following items: " << endl;
			for (int i = 1; i <= 2; i++)  //loop for displaying the items selected in a menu format.
			{
				if (itm[i] == 1)
				{
					cout << "| Tea         | Rs." << price[0] << " | " << quantity[0] << "cups  " << endl;;
					
				}
				else if (itm[i] == 2)
				{
					cout << "| Small Pizza | Rs."<< price[1] << " | " << quantity[1] <<endl;
					
				}
				else if (itm[i] == 3)
				{
					cout << "| Patties     | Rs." << price[2] << " | " << quantity[2] << endl;;
					
				}
				else if (itm[i] == 4)
				{
					cout << "| Pastry      | Rs." << price[3] << " | " << quantity[3] <<endl;
					
				}
				else if (itm[i] == 5)
				{
					cout << "| Samosa      | Rs." << price[4] << " | " << quantity[4] << endl;;
					

				}
				else if (itm[i] == 6)
				{
					cout << "| Green Salad | Rs." << price[5] << " | " << quantity[5] << endl; ;
					
				}
				else if (itm[i] == 7)
				{
					cout << "| Sandwich    | Rs." << price[6] << " | " << quantity[6] << endl;;
				
				}
				else if (itm[i] == 8)
				{
					cout << "| Burger      | Rs." << price[7] << " | " << quantity[7] << endl;;
					
				}
				else if (itm[i] == 9)
				{
					cout << "| Fries       | Rs." << price[8] << " | " << quantity[8] << " packets  " << endl;;
					
				}
				else if (itm[i] == 10)
				{
					cout << "| Coffee      | Rs." << price[9] << " | " << quantity[9] << " cups " << endl; 
					
				}

			}
		}
		

		cout << endl;

		cout << "Press 0 to switch log-in OR any other key to exit. ";
		cin >> swtch;

		cout << endl;

		cout << "You have done a total of " << trans << " transaction(s)." << endl;

		cout << endl;

		if (swtch != 0)
		{
			break;
		}
	} while (swtch == 0);

	return 0;
}
