//Programm for checking for reciprocal numbers and opposite numbers
#include <iostream>

//I use "using" declaration so as not to write the std prefix in commands, cout, cin, endl, and string each time
using std::cout, std::cin, std::endl, std::string;

int main()
{
    int awnser;
    float num1, num2;

    cout << "This is a program to test numbers to see if numbers are reciprocal or opposite." <<endl;
    //We ask the user to check if the numbers are reciprocal or if the numbers are opposite
    cout << "Check if the numbers are reciprocal or if the numbers are opposite?" <<endl;
    cout << "1) Reciprocal \n2) Opposite\nAnswer: ";
    cin >> awnser;
    
    //We ask the user to enter numbers (if you enter a fraction, then only decimal)
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

   //Calculationsssssssssssssss
   switch (awnser)
     {
         case 1:
             if (num1 * num2 == 1)
             {
                 cout << "Numbers are reciprocal ." <<endl;
             }
             else
             {
                 cout << "Numbers are not reciprocal ." <<endl;
             }
             break;
    
         case 2:
             if (num1 + num2 == 0)
             {
                 cout << "Numbers are opposite." <<endl;
             }
             else
             {
                 cout << "Numbers are not opposite." <<endl;
             }
             break;
    
         default:
             cout << "Oops... Error: Looks like you entered something wrong, try restarting the program." <<endl;
             break;
     }
     return 0;
}
