//Enkh-Od Zol-Od
//Assignment 6
//04/01/2022

# include <iostream>
# include <iomanip>
# include <fstream>

using namespace std;

int main() {
   //Declaring stream variables
   ifstream inputFile;
   ofstream outputFile;
   
   //Opening the files
   inputFile.open("fieldData.txt");
   outputFile.open("fileAnalysis.txt");
   
   //Declaring variables for storing the number of rows, columns
   int row, col;  
   
   //Since we will be working with float numbers, this next line will make the outputs to have 1 decimal place.
   cout << fixed << setprecision(1);
   
   //Getting and storing the row and column numbers into variables
   inputFile >> row;
   inputFile >> col;
   
   //Declaring all the necessary variables
   int r = 0, bad_value, bad_col[col], count_col = 0;
   double num_data[row][col], bad_perc[col], total_perc;
   
   //Getting the numbers from the inputFile and storing them under a 2D array
   while(!inputFile.eof()) {
      for(int c = 0; c < col; c++) {
         inputFile >> num_data[r][c];
      }
      r++;
   }
   
   for(int n = 0; n < col; n++) {
      //Checking the values column by column to see if they are bad values
      bad_value = 0;
      for(int i = 0; i < row; i++){
         if(num_data[i][n] < 55) {
            bad_value++;
         }
      }
      //Calculating the percentage of bad values in a particular column
      bad_perc[n] = (bad_value * 100.0) / row;
      //Trying to determine if the column is bad
      if(bad_perc[n] > 1) {
         bad_col[count_col] = n + 1;
         //Counting the bad columns
         count_col++;
      }
   }
   //Calculating the percentage of bad columns from the whole file
   total_perc = (count_col * 100.0) / col; 
   //Determining whether to accept the file or not
   if (total_perc > 10) { 
      cout << "The percentage of bad columns was: " << total_perc << " % therefore this file is rejected.";
      //Writing to the outputFile
      outputFile << "The bad columns found were:";
      //Writing the column numbers of the bad ones to the outputFile
      for(int n = 0; n < count_col; n++) {
         outputFile << endl;
         outputFile << bad_col[n];
      }
   } 
   else if(total_perc == 0) {
      cout << "There were no bad columns found.\nTherefore, this file is accepted.";
   }
   else {
      cout << "The percentage of bad columns was " << total_perc << " % therefore this file is accepted.";
      //Writing to the outputFile
      outputFile << "The bad columns found were:";
      //Writing the column numbers of the bad ones to the outputFile
      for(int n = 0; n < count_col; n++) {
         outputFile << endl;
         outputFile << bad_col[n];
      }
   }
   
   //Closing the files
   inputFile.close();
   outputFile.close();
   
return 0;
}