#include <iostream>
#include <iomanip>

using namespace std;

int main () {
int n = 0, student_qnt, option = 1, final_score[n], counta = 0, countb = 0, countc = 0, countd = 0, countf = 0;
//define numeric variables 
double score[35][4], weighted_score, percentage_a, percentage_b, percentage_c, percentage_d, percentage_f;
//We need 2 dimensional array r=35 which is student number, c=4 represent exam1, exam2, exam3, exam3. 
string answer;
//a variable that stores a sequence of letters or other characters
cout << fixed << setprecision (2);
//control numbers of digits floating-point value
  
  while (option != 0) 
//Using "while loop" get first student's 4 exam scores. 
   {
      for (int c = 0; c < 4; c++)
	{
	  cout << "Please enter exam " << c + 1 << " percentage:" << endl;
	  cin >> score[n][c];
	}
//Asking exam scores
    cout <<"Do you have another student? if Yes please enter 1, if No please enter 0\n";
    cin >> option;
    n++;
    }
//Option to add one more student scores or finish program

  cout << "What is your course?\n";
  cin >> answer;
//Asking user's course
  student_qnt = n;
  n = 0;
//student count
  do
//Using "do while loop" to calculate input
    {
      final_score[n] = score[n][0] * 0.1 + score[n][1] * 0.2 + score[n][2] * 0.3 + score[n][3] * 0.4;
//Finding weighted score     
      if (final_score[n] >= 90)
	{
	  counta++;
	}
      else if (final_score[n] >= 80)
	{
	  countb++;
	}
      else if (final_score[n] >= 70)
	{
	  countc++;
	}
      else if (final_score[n] >= 60)
	{
	  countd++;
	}
      else
	{
	  countf++;
	}
      n++;
    }
//Giving if-else statement for finding what letter grade what percentage    
  while (n < student_qnt);

  percentage_a = counta * 100 / student_qnt;
  percentage_b = countb * 100 / student_qnt;
  percentage_c = countc * 100 / student_qnt;
  percentage_d = countd * 100 / student_qnt;
  percentage_f = countf * 100 / student_qnt;
//Calculating percentage for each grade
  cout << " \n";
  cout << " \n";
  cout << answer << endl;
  cout << "\t A's " << "--> " << counta << " --> " << percentage_a << endl;
  cout << " \n";
  cout << "\t B's " << "--> " << countb << " --> " << percentage_b << endl;
  cout << " \n";
  cout << "\t C's " << "--> " << countc << " --> " << percentage_c << endl;
  cout << " \n";
  cout << "\t D's " << "--> " << countd << " --> " << percentage_d << endl;
  cout << " \n";
  cout << "\t F's " << "--> " << countf << " --> " << percentage_f << endl;
  cout << " \n";
  cout << "\n";
//Display output
  return 0;
}