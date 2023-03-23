#include <iostream>
#include <fstream>

using namespace std;

int main() {
   ifstream inputFile;
   ofstream outputFile;
   inputFile.open("myInput.txt");
   outputFile.open("myOutput.txt");
   
   string name;
   int number, answer;
   
   inputFile >> name;
   outputFile << "The person who collected this data is " << name << endl;
   
   while(!inputFile.eof()) {
   
      inputFile >> number;
      
      answer = number * number;
      
      outputFile << "The number " << number << " squared is " << answer << endl;
   }
   
   cout << "Program finished and output is in file named myOutput.txt" << endl;
   
   inputFile.close();
   outputFile.close();

return 0;
}