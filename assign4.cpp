//Enkh-Od Zol-Od
//Assignment 4
//03/04/2022

# include <iostream>
# include <iomanip>

using namespace std;
 int main() {
   //In the next 3 rows all the necesary variables are declared.
   double score[50][4], weighted_scores[33], perc_a, perc_b, perc_c, perc_d, perc_f;
   int n = 0, r = 0, add = 1, count_a = 0, count_b = 0, count_c = 0, count_d = 0, count_f = 0;
   string class_num;
   
   //Since we will be getting float outputs, this next line will make the outputs to have 2 decimal places.
   cout << fixed << setprecision(2);
   
   //In order to ask the user if they want to add one more student's scores, I am using the while loop.
   while(add != 0){
      //The exam scores will be stored in a two-dimensional array, so I am using for loop to get the scores for the each of the 4 exams.
      for(int c = 0; c < 4; c++){
         cout << "Please enter the score of exam " << c + 1 << endl;
         cin >> score[r][c];
      }
   r++;   
   //The user doesn't exactly know the number of the students they have in the class, so I am asking them if they want to add more students.
   cout << "Do you want to add more student exam scores? Enter 1 for Yes and 0 for No" << endl;
   //And assigning it to 'add'.
   cin >> add;
   }
   
   //Asking the user for the class number.
   cout << "Please enter the class number in a similar format to COSC-1303" << endl;
   //And assigning it to class_num.
   cin >> class_num;
   
   //Using do-while loop to calculate the weighted scores and to determine the letter grade, adding it to the counter.
   do{
      weighted_scores[n] = score[n][0] * 0.1 + score[n][1] * 0.2 + score[n][2] * 0.3 + score[n][3] * 0.4;
      if(weighted_scores[n] >= 90) {
      count_a++;
      }
      else if(weighted_scores[n] >= 80) {
      count_b++;
      }
      else if(weighted_scores[n] >= 70) {
      count_c++;
      }
      else if(weighted_scores[n] >= 60) {
      count_d++;
      }
      else {
      count_f++;
      }
      n++;
   } while (n < r);
   
   //Calculating the percentage for each grade and assigning them to variables.
   perc_a = (count_a * 100.0) / r;
   perc_b = (count_b * 100.0) / r;
   perc_c = (count_c * 100.0) / r;
   perc_d = (count_d * 100.0) / r;
   perc_f = (count_f * 100.0) / r;
   
   //Outputting the number of A's, B's, C's, D's, F's in the class with the percentage for each letter grade.
   cout << endl;
   cout << endl;
   cout << class_num << ":" << endl;
   cout << "\t A's --> " << count_a << " --> " << perc_a << " %" << endl;
   cout << endl;
   cout << "\t B's --> " << count_b << " --> " << perc_b << " %" << endl;
   cout << endl;
   cout << "\t C's --> " << count_c << " --> " << perc_c << " %" << endl;
   cout << endl;
   cout << "\t D's --> " << count_d << " --> " << perc_d << " %" << endl;
   cout << endl;
   cout << "\t F's --> " << count_f << " --> " << perc_f << " %" << endl;
   cout << endl;
     
return 0;
}