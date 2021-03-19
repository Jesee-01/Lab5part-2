// lab5part2.cpp
// Be sure to include comments where necessary for style grading

#include <iostream>            
using namespace std;

int main ()
{
	// Insert necessary variable declarations here
	//Constant variable
	double taxPercent = 7.75;
	int maxPercent = 100;
	
    double mealCost,   //tracks raw cost of food from user
    tipPercent;        //tracks the desired tip amount from user
    
    //variables or calculations
    double taxAmount, mealCostPlusTax, tipAmount, totalBill; 

	

	cout << "What is the value of your meal bill before tax to the nearest penny?"<<endl;
	//Insert code to store this value
    //Store value xx.xx into a variable
    cin >> mealCost;
	cout << "What percent would you like to tip? "
		<< "Only input the percent value to the nearest hundredth"
		<<endl;
	//Insert code to store this value 
    //Store their desired tip % as xx.xx
    cin >> tipPercent;
	//Insert necessary calculations
    // Calculate dollar amount of tax
    taxAmount = mealCost* (taxPercent / maxPercent);
    //Calculate dollar amount of tip 
    mealCostPlusTax = mealCost + taxAmount;
    tipAmount = mealCostPlusTax *(tipPercent/maxPercent);
    //Calculate total bill
    totalBill = mealCostPlusTax + tipAmount;

	//ouput only the values of 
	//pre tax and tip meal cost,
	cout << "For your meal cost of $ "
		<< mealCost
		<< " You will pay:"
		<<endl;
	//tax amount
	cout << "Tax: $ "
		<< taxAmount
		<<endl;
	//tip amount
	cout << "Tip: $ "
		<< tipAmount
		<<endl;
	//and total bill 
	cout << "With a total final bill of: $ "
		<< totalBill
		<<endl;
	//with tax each on its own line.

	   
	//Insert any other necessary pieces here
return 0;
}