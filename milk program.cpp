/*
declaring variables

constant variable:
-milk carton size
-cost of producing one litre of milk
-profit per carton of milk

Variables:
-Milk quantity
-number of cartons
-total cost of milk
-total profit

User input:
-number of milk produced

Calculation:


Output:
-number of milk cartons needed to hold milk
-cost of production
-profit for producing milk
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

const double carton_size = 3.78;
const double cost_prod_one_litre = 0.38;
const double profit_per_carton = 0.27;

int main()
{
	double milk_produced, total_cost_of_milk, total_profit;
	
	cout << "Enter number of milk produced: ";
	cin >> milk_produced;

	cartons_needed = milk_produced / carton_size;
	total_cost_of_milk = milk_produced * cost_prod_one_litre;
	total_profit = cartons_needed * profit_per_carton;

	cout << "That is required " << static_cast<int>(cartons_needed) << "cartons" << endl;
	cout << "Total cost of Production: $" << total_cost_of_milk << endl;
	cout << "Total Profit: $ " << total_profit << endl;
	
	
	system("pause");

    return 0;
}

