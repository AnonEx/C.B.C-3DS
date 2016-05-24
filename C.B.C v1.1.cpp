#include <stdio.h>
#include <conio.h>
#include <string>
#include <iostream>
#include <stdbool.h>
#include <sys/stat.h>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main(int argc, char** argv)
{

	const string MULTIPLICATION = "Multiplication";
	const string DIVISION = "Division";
	const string SUBTRACTION = "Subtraction";
	const string ADDITION = "Addition_";
	const string BLANKS = "Blanks";
	const string INPUT = "input";
	string multiplication, division, subtraction, addition_, blanks;

	while(1) {
		

	cout << "|+++++|                        =====C.B.C=====                           |+++++|                           (Command Based Calculator)\n                                    (1.1)\n                            -----------------------\n                            |   Control Commands  |\n                            ~~~~~~~~~~~~~~~~~~~~~~~\n                            |UP  =  Addition      |\n                            |RIGHT = Division     |\n                            |DOWN = Subtraction   |\n                            |LEFT = Multiplication|\n                            |  A = Enter          |           \n                            |  X = 1 number up    |           \n                            |  Y = 1 number down  |                         \n                            -----------------------\n\n                          Select ONE of the following:\n\n                                  -Addition\n\n                                  -Multiplication\n\n                                  -Subtraction\n\n                                  -Division:\n";
	cin >> blanks;
	//Checking if human is searching for an easter egg (or something to complain about); submiting blank commands.
	if(blanks.length() < 8)
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n...Get back down there! 0_o\n\n[?]\n";
	}
	else 
	{ 
	// Addition
			// 2nd column down
			
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            |   Control Commands  |\n                            ~~~~~~~~~~~~~~~~~~~~~~~\n                            |UP = Addition        |\n                            |RIGHT = Division     |\n                            |DOWN = Subtraction   |\n                            |LEFT = Multiplication|\n                            |  A = Enter          |           \n                            |  X = 1 number up    |           \n                            |  Y = 1 number down  |                         \n                            -----------------------\n\n\n\n\n\n\n\n\n\n\n\nRe-enter command to confirm:\n\n"; 
			cin >> addition_;
			if(addition_.length() == 9)
			{
					int num1a;
					int num2a;
					int sum_a;
			
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou have selected Addition\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
 		 	printf("\n\n(Press A to submit command)\n(or press START to exit)\n\n-Enter two numbers:\n");
	        
					
					scanf("%d", &num1a);
					scanf("%d", &num2a);
				
					
					sum_a = num1a + num2a;
			printf("\nYour sum is %d\n\n\n\n\n", sum_a);
			getch();
		}
			else
{			
			// Division
			// 3rd column down.
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            |   Control Commands  |\n                            ~~~~~~~~~~~~~~~~~~~~~~~\n                            |UP = Addition        |\n                            |RIGHT = Division     |\n                            |DOWN = Subtraction   |\n                            |LEFT = Multiplication|\n                            |  A = Enter          |           \n                            |  X = 1 number up    |           \n                            |  Y = 1 number down  |                         \n                            -----------------------\n\n\n\n\n\n\n\n\n\n\n\nRe-enter command to confirm:\n\n";
			cin >> division;
			if(division.length() == 8)
			{
					
		
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                              __________________________\n                              You have selected Division\n                              |.______________________.|\n\n\n\n\n\n\n                                          ()                  \n                                         ____\n                                        |____|\n\n                                          ()\n\n\n\n");
 	    
			printf("              \n\n(Press A to submit command)\n(or press START to exit)\n\n\n-Enter two numbers:\n");
           		
           			int num1d;
					int num2d;
					int sum_d;
					
					scanf("%d", &num1d);
					scanf("%d", &num2d);
				
					
					sum_d = num1d / num2d;
			printf("\nYour sum is %d\n\n\n\n\n", sum_d);
			getch();
	}
		else 
		{
			// Subtraction
			// 4th column down
			
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            |   Control Commands  |\n                            ~~~~~~~~~~~~~~~~~~~~~~~\n                            |UP = Addition        |\n                            |RIGHT = Division     |\n                            |DOWN = Subtraction   |\n                            |LEFT = Multiplication|\n                            |  A = Enter          |           \n                            |  X = 1 number up    |           \n                            |  Y = 1 number down  |                         \n                            -----------------------\n\n\n\n\n\n\n\n\n\n\n\nRe-enter command to confirm:\n\n";
		    cin >> subtraction;
		    if(subtraction.length() == 11)
		    {
		    	
				
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\nYou have selected Subtraction\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	    	printf("-------------------------------------------------------------------------------\n        ||         3DS Basic Subtraction Calculator v1.0         ||\n-------------------------------------------------------------------------------\n\n(Press A to submit command)\n(or press START to exit)\n\n\n-Enter two numbers:\n");
	        
				     
				     int num1s;
					 int num2s;
					 int sum_s;
					 
					 scanf("%d", &num1s);
        	         scanf("%d", &num2s);
        	        
        	        
					 sum_s = num1s - num2s;
	        printf("\nYour sum is %d\n\n\n\n\n", sum_s);
	        getch();
	}
		else 
		{
			//Multiplication
	 // 5th column down
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                            |   Control Commands  |\n                            ~~~~~~~~~~~~~~~~~~~~~~~\n                            |UP = Addition        |\n                            |RIGHT = Division     |\n                            |DOWN = Subtraction   |\n                            |LEFT = Multiplication|\n                            |  A = Enter          |           \n                            |  X = 1 number up    |           \n                            |  Y = 1 number down  |                         \n                            -----------------------\n\n\n\n\n\n\n\n\n\n\n\nRe-enter command to confirm:\n\n";
		cin >> multiplication;
		if(multiplication.length() == 14) 
		{
			printf("You have selected Multiplication\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n------------------------------------------------------------------------------\n");
        	printf("            ||     3DS Basic Multiplication Calculator v1.0     ||\n------------------------------------------------------------------------------\n\n(Press A to submit command)\n(or press START to exit)\n\n\n-Enter two numbers:\n");
        	getchar();
        	
        	
	             int num1m;
				 int num2m;
				 int sum_m;
				 scanf("%d", &num1m);
	             scanf("%d", &num2m);
	             
	         
	                 sum_m = num1m * num2m;
	                
	        printf("\nYour sum is %d\n\n\n\n\n", sum_m);
	        getch();
	}
	}
		if(addition_ == ADDITION && division == DIVISION && subtraction == SUBTRACTION && multiplication == MULTIPLICATION)
				cout << "";



}
    
    
    








	
 		 	
}
}
}




getch();
return 0;
}
