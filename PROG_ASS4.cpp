/*
Author: N.J Cagomoc
Program: Simple Problem
Description: This program calculates the number of hockey sticks can be bought.
*/
#include <iostream>
using namespace std;
int main()
{
	//Initialize the variables
	int c;
	float a,d;
	double b;
	string again="yes";
	
	while (again=="yes"||again=="Yes"||again=="YES")
	{
		//title of the program
		cout << " Simple Problem" << "\n" << endl;
		
		// problem to be program
		cout <<" Robert will spent $184.59 dollars in buying hockey ticks. ";
		cout << "Enter value for each hockey sticks that Robert wishes to buy in pesos.";
		cout <<"How much hockey sticks will he can have given his money. ";
		cout << "If there is exchange, how much it will be?. ";
		cout << "Note: Answers were represented in pesos.($1 dollar = 53.30 pesos )" <<"\n\n"<< endl;
		
		//Prompt the user to enter input
		cout << "Enter the value of each hockey sticks: ";
		cin >> a;
		cout <<"\n\n";
		
		//formulas to be use
		b=184.59*53.30;
		c=b/a;
	    d=b-(a*c);
	    
	    //the output to the created program 
		cout <<" His money in pesos is: " << b << endl;
		cout << "The number of hockey sticks Robert will have is: " << c << endl;
		cout <<"His exchange will be: " << d << endl;
		
		
		//loop to try it again
	     cout << "\n\n Do you want to try it again? (yes/no):";
	     cin  >> again;
	     cout << " \n\n\n";
    }
 return 0;
}
