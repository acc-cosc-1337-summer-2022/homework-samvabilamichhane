#include "hwexpressions.h"

//write function code here

double get_sales_tax_amount(double meal_amount)
{
	auto tax_rate = 0.0675;
	auto tax_amount = tax_rate * meal_amount;
	
	return tax_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	auto tip_amount = meal_amount * tip_rate;
	
	return tip_amount;
}




