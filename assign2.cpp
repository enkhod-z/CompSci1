//Enkh-Od Zol-Od
//Assignment 2
//02/05/2022

//Including the libraries needed for this program
# include <iostream>
# include <cmath>

using namespace std;
 int main() {
   //In the next line all the variables are declared
   double menu_options, base, exponent, exp_pos, answer, new_answer;
   
   //Displaying the options of the menu for the user, one by one
   cout << "Please choose from one of the options below:\n"
   << "\t-Enter 1 if the exponent is positive\n" 
   << "\t-Enter 2 if the exponent is negative\n" 
   << "\t-Enter 3 if the exponent is a fraction\n" 
   << "\t-Enter 4 if the exponent is equal to 0\n"
   << "\t-Enter 5 if the exponent is equal to 1\n";
   //And the chosen option will be assigned to a variable named "menu_options" using cin
   cin >> menu_options;
   
   //Let's check if the user chose the option 1
   if(menu_options == 1) {
      //Since the user had chosen option 1, let's ask them for the base number
      cout << "Please enter the base number" << endl;
      //And assign the base number to a variable named "base"
      cin >> base;
      //Next, the user will be asked for the positive exponent
      cout << "Please enter the positive exponent" << endl;
      //And assign it to a varable named "exponent"
      cin >> exponent;
      //Let's use the base and the exponent in a pow() function to calculate the answer
      //The answer is aasigned to a variable called "answer"
      answer = pow(base, exponent);
      //The answer is being displayed along with the base number and the exponent
      cout << "The base " << base << " raised to the power of " << exponent << " is " << answer << endl;
      }
   
   //If the user didn't choose 1 then check if they entered option 2 
   else if(menu_options == 2) {
      //Since the user had chosen option 2, let's ask them for the base number
      cout << "Please enter the base number" << endl;
      //And assign the base number to a variable named "base"
      cin >> base;
      //Next, the user will be asked for the negative exponent
      cout << "Please enter the negative exponent" << endl;
      //And assign it to a variable named "exponent"
      cin >> exponent;
      //We can't use a negative exponent in the pow() function, so let's multiply it by -1 to make it positive and assign it to a variable named "exp_pos"
      exp_pos = exponent * (-1);
      //Let's use the base and the exp_pos in a pow() function to calculate the answer
      answer = pow(base, exp_pos);
      //Since we are using a negative exponent, we will calculate the final answer by dividing 1 by the "answer"
      new_answer = 1 / answer;
      //The final answer is being displayed along with the base number and the negative exponent
      cout << "The base " << base << " raised to the power of " << exponent << " is " << new_answer << endl;
      }
    
    //If the user didn't choose 1 or 2 then check if they entered option 3 
    else if(menu_options == 3) {
      //Since the user had chosen option 3, let's ask them for the base number
      cout << "Please enter the base number" << endl;
      //And assign the base number to a variable named "base"
      cin >> base;
      //Next, the user will be asked for the upper number of the fractional exponent
      cout << "Please enter the upper exponent" << endl;
      //And assign it to a variable named "exponent"
      cin >> exponent;
      //Let's use the base and the upper exponent in a pow() function to calculate the answer
      answer = pow(base, exponent);
      //The denominator of the fractional exponent is always equal to 2, so let's calculate the final answer using sqrt() function
      //And assign the final answer to a variable named "new_answer"
      new_answer = sqrt(answer);
      //The final answer is being displayed along with the base number and the fractional exponent
      cout << "The base " << base << " raised to the power of " << exponent << "/2 is " << new_answer << endl;
      }

    //If the user didn't choose any of the above options then check if they entered option 4 
    else if(menu_options == 4) {
      //Since the user had chosen option 4, let's ask them for the base number
      cout << "Please enter the base number" << endl;
      //And assign the base number to a variable named "base"
      cin >> base;
      //Since any base number raised to the power of 0 is equal to 1, let's assign the variable "answer" to 1
      answer = 1;
      //The answer is being displayed along with the base number
      cout << "The base " << base << " raised to the power of 0" << " is " << answer << endl;
      }
    
    //If the user didn't choose any of the above options then we are left with the last option 5  
    else {
      //Since the user had chosen option 5, let's ask them for the base number
      cout << "Please enter the base number" << endl;
      //And assign the base number to a variable named "base"
      cin >> base;
      //Since any base number raised to the power of 1 will be equal to themselves(base number), let's assign variable "answer" to "base"
      answer = base;
      //The answer is being displayed along with the base number
      cout << "The base " << base << " raised to the power of 1" << " is " << answer << "." << endl;
      } 
           
return 0;
} 
   