//Enkh-Od Zol-Od
//Assignment 3
//02/15/2022

# include <iostream>
# include <iomanip>

using namespace std;
 int main() {
   //In the next 4 rows all the variables are declared.
   //Only those that will be in the output are stored in an array with 25 boxes.
   string first_name[25], last_name[25];
   double work_hour[25], hourly_pay[25], in_tax_calc[25], ss_tax_calc[25], gross_pay[25], net_pay[25];
   int n = 0, employee;
   //The tax rates are the same as assignment 1, but they are stored as constant variables.
   const double in_tax = 0.09, ss_tax = 0.0875;
   
   //Since we will be getting float outputs, this next line will make the ouputs to have 2 decimal places.
   cout << fixed << setprecision(2);
   
   //Since the program allows the user to input as many employee information they want, let's ask the user for the employee number.
   cout << "How many employee information do you want to input?" << endl;
   //And assign the employee number into a variable called employee.
   cin >> employee;
   
   //In order to get several employee's information and assign them into arrays we will use the while loop. The number of employees will determine how many times the loop will run.
   while(n < employee) {
      //Let's ask the employee to enter their first name using cout.
      cout << "Please enter the employee's first name." << endl;
      //And their name will be assigned to variable first_name[n] using cin.
      cin >> first_name[n];
      //This is the same thing except the employee is asked to enter their last name.
      cout << "Please enter the employee's last name." << endl;
      //And their last name will be assigned to a variable named last_name[n].
      cin >> last_name[n];
      //In order to calculate the employee's gross pay, we need to ask them their hourly pay.
      cout << "How much does the employee get paid per hour?" << endl;
      //It will be assigned to hourly_pay[n].
      cin >> hourly_pay[n];
      //Also the number of hours worked is needed to calculate their gross pay.
      cout << "How many hours in total did the employee work this week?" << endl;
      //And the number of hours worked will be asigned to work_hour[n].
      cin >> work_hour[n];
      //Using the work_hour[n] and the hourly_pay[n], let's calculate the gross_pay[n].
      gross_pay[n] = hourly_pay[n] * work_hour[n];
      //The employee will be paying taxes, so let's calculate the income tax which is 9% of the gross pay.
      in_tax_calc[n] = gross_pay[n] * in_tax;
      //Next tax is the social security tax which is 8.75% of the gross pay.
      ss_tax_calc[n] = gross_pay[n] * ss_tax;
      //To calculate the net_pay[n] that the employee will be getting, let's subtract the taxes from the gross pay.
      net_pay[n] = gross_pay[n] - in_tax_calc[n] - ss_tax_calc[n];
      //To store the next employee's information in the next box, we will add 1 to n and assign it to it self.
      n++;
      //To make it easier for the eyes, let's put a blank space after every employee.
      cout << " " << endl;
   }
   
   //To differentiate the output from the input let's add one more blank space.
   cout << " " << endl;
   
   //Let's show all the calculations with the employee information for the user in the correct format using the for loop.
   for(int i = 0; i < employee; i++) {
      //First we will output the employee's last name and first name with the employee's number.
      cout << "Employee " << i + 1 << ": " << last_name[i] << ", " << first_name[i] << endl;
      //Adding * signs for a better view of the outputs for the user.
      cout << "****************************" << endl;
      //Let's output the gross pay.
      cout << "Gross Pay: $" << gross_pay[i] << endl;
      //Now the taxes and the calculated income tax, ss taxes are outputted.
      cout << "Taxes:" << endl;
      cout << "\t Income Tax: $" << in_tax_calc[i] << endl;
      //In order to make it more presentable, I added tab spaces before the taxes, using \t.
      cout << "\t SS Tax: $" << ss_tax_calc[i] << endl;
      cout << "****************************" << endl;
      //Finally the net pay is outputted.
      cout << "Net Pay: $" << net_pay[i] << endl;
      //To make it easier to see, let's add two blank spaces after every employee output.
      cout << " " << endl;
      cout << " " << endl;
   }
   
return 0;
} 