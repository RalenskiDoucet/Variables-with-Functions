#include <iostream>

void main()
{
	//You can not print to the console unless the problem specifies.

	//1. Select suitable variable types and names for the following examples
	//a) The average height of students in your class
	int avgHight = 6;
	//b) The tax rate for incomes over $65000
	int taxRate = 65000;
	//c) The tax rate for incomes below $5000
	int rateOftax = 5000;
	//d) The total cost of all the games on your Steam library
	int totalAll = 18;

	//2. Select suitable data types to hold the following values :
	//a) 121
//int
	//b) 9.4
//float
	//c) r
//char
	//d) 100000
//int
	//e) False
//bool
	
		//3. Create a program that swaps two numbers. Ask the user for 2 numbers in the console window
		//and store the result in variables called “a” and “b” print the result to screen.Write code 
		//that swaps the values for these variables, then print the variables “a” and “b” again.
		//You should comment your code.
		int a = 5;
		int b = 10;
		int c = 0;
		std::cin >> a;
		std::cin >> b;
		c = a;
		a = b;
		b = c;
		

	
	//4. Ask the user for 5 numbers and output the average of these numbers.		

		int number1 = 10;
		int number2= 20;
		int number3= 30;
		int number4 = 40;
		int number5 = 50;
		int avgofNums = 50; 
		std::cin >> number1;
		std::cin >> number2;
		std::cin >> number3;
		std::cin >> number4;
		std::cin >> number5;
		std::cout << (number1 + number2 + number3 + number4 + number5) / 50;
		void  (50);
		{
			std::cout << (avgofNums);
			return;
		}

			 
		
		
	//5. Redo question 3 but allows the user to input the values to be swapped and provide information
	//in the console proving the data was swapped.
		std::cin >> a;
		std::cin >> b;
		c = a;
		a = b;
		b = c;
	
}