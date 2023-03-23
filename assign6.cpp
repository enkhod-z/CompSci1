//Enkh-Od Zol-Od
//Assignment 6
//04/01/2022

# include <iostream>
# include <iomanip>
# include <fstream>

using namespace std;

int main() {
   ifstream inputFile;
   ofstream outputFile;
   
   inputFile.open("fieldData.txt");
   outputFile.open("fileAnalysis.txt");
   
   int row, col, bad_value, bad_col[100], count_col = 0;
   double num_data[100][100], bad_perc[100], total_perc;
   
   inputFile >> col;
   inputFile >> row;
   
   while(!inputFile.eof()) {
      for(int r = 0; r < row; r++) {
         for(int c = 0; c < col; c++) {
            inputFile >> num_data[r][c];
         }
      }
      break;
   }
   
   for(int n = 0; n < col; n++) {
      bad_value = 0;
      for(int i = 0; i < row; i++){
         if(num_data[i][n] < 55) {
            bad_value++;
         }
      }
      bad_perc[n] = (bad_value * 100.0) / row;
      if(bad_perc[n] >= 1) {
         bad_col[n] = n + 1;
         count_col++;
      }
      cout << bad_col[n] << " ";
   }
   cout << endl;
   cout << count_col << endl;
   
   total_perc = (count_col * 100.0) / col; 
   if (total_perc >= 10) { 
      cout << "The percentage of bad columns was: " << total_perc << " % therefore this file is rejected." << endl;
   } 
   else if(total_perc == 0) {
      cout << "There were no bad columns found. Therefore, this file is accepted." << endl;
   }
   else {
      cout << "The percentage of bad columns was " << " % therefore this file is accepted." << endl;
      }
   
   inputFile.close();
   outputFile.close();
   
return 0;
}