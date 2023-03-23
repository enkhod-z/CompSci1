//Enkh-Od Zol-Od
//Assignment 1
//01/28/2022

//Including the libraries needed for this program.
# include <iostream>
# include <iomanip>

using namespace std;
 int main() {
   //In the next two lines all the variables (float and string) are declared.
   double work_hour, hourly_pay, gross_pay, income_tax, ss_tax, net_pay;
   string first_name, last_name;
   
   //Since we will be getting float outputs, this next line will make the ouputs to have 2 decimal places.
   cout << fixed << setprecision(2);
   
   //Let's ask the employee to enter their first name using cout.
   cout << "Please enter your first name" << endl;
   //And their name will be assigned to variable first_name using cin.
   cin >> first_name;
   
   //This is the same thing except the employee is asked to enter their last name.
   cout << "Please enter your last name" << endl;
   //And their last name will be assigned to a variable named last_name.
   cin >> last_name;
   
   //In order to calculate the employee's gross pay, we need to ask them the number of hours they worked for the week.
   cout << "How many hours in total did you work this week?" << endl;
   //And the number of work hours will be aasigned to work_hour.
   cin >> work_hour;
   
   //Also their hourly pay is needed to calculate their gross pay.
   cout << "How much do you get get paid per hour?" << endl;
   //It will be assigned to hourly_pay.
   cin >> hourly_pay;
   
   //Using the work_hour and the hourly_pay, let's calculate the gross_pay.
   gross_pay = work_hour * hourly_pay;
   
   //The employee will be paying taxes, so let's calculate the income tax which is 9% of the gross pay.
   income_tax = gross_pay * 0.09;
   
   //Next tax is the social security tax which is 8.75% of the gross pay.
   ss_tax = gross_pay * 0.0875;
   
   //To calculate the net pay that the employee will be getting, let's subtract the taxes from the gross pay.
   net_pay = gross_pay - income_tax - ss_tax;
   
   //The calculations are done, so let's show the employee a detailed information about their net pay.
   cout << "Employee: " << last_name << ", " << first_name << endl;
   cout << "****************************" << endl;
   cout << "Gross Pay: $" << gross_pay << endl;
   cout << "Taxes:" << endl;
   cout << "\t Income Tax: $" << income_tax << endl;
   //In order to make it more presentable, I added tab spaces before the taxes, using \t.
   cout << "\t SS Tax: $" << ss_tax << endl;
   cout << "****************************" << endl;
   cout << "Net Pay: $" << net_pay << endl;
   
return 0;
} 