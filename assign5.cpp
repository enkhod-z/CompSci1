//Enkh-Od Zol-Od
//Assignment 5
//03/11/2022

# include <iostream>
# include <iomanip>
# include <cmath>

using namespace std;

//Prototype statements
double getCylinderVol(double, double);
double getConeVol(double, double);
double getSphereVol(double);
void menu();

int main() {
   //In the next 3 rows all the necesary variables are declared.
   int n = 0, choice;
   double radius, height, answer[35];
   string shape[35];
   
   //Since we will be getting float outputs, this next line will make the outputs to have 2 decimal places.
   cout << fixed << setprecision(2);
     
   //Using the while loop to get the choice, calculate the volume, store the shape name.
   while(n < 35){
      //Displaying the menu for the user and asking their choice.
      menu();
      cout << "Please select a value from the menu\n";
      cin >> choice;
      //Calculations for the sphere.
      if(choice == 1){
      cout << "Please enter the radius of the sphere." << endl;
      cin >> radius;
      answer[n] = getSphereVol(radius);
      shape[n] = "sphere";
      }
      //Calculations for the cone.
      else if(choice == 2){
      cout << "Please enter the radius of the cone." << endl;
      cin >> radius;
      cout << "Please enter the height of the cone." << endl;
      cin >> height;
      answer[n] = getConeVol(radius, height);
      shape[n] = "cone";
      }
      //Calculations for the cylinder.
      else if(choice == 3){
      cout << "Please enter the radius of the cylinder." << endl;
      cin >> radius;
      cout << "Please enter the height of the cylinder." << endl;
      cin >> height;
      answer[n] = getCylinderVol(radius, height);
      shape[n] = "cylinder";
      }
      //Stopping the loop if the user enters 0.
      else{
      break;
      }
      n++;
      cout << "" << endl;
   }
   
   cout << "" << endl;
   
   //Using for loop to display the output.
   for(int i = 0; i < n; i++){
   cout << "Shape " << i + 1 << " is a " << shape[i] << " and the volume is " << answer[i] << endl;
   }
      
return 0;
} //end of main

//Function that does not return or get anything. 
void menu() {
   
   cout << "Enter 1 to calculate a Sphere\n" 
   << "Enter 2 to calculate a Cone\n"
   << "Enter 3 to calculate a Cylinder\n"
   << "Enter 0 to stop the program\n"
   <<"\n";
}

//Function that receives radius, height and returns the volume of cylinder.
double getCylinderVol(double radius, double height) {
   double volume;
   
   volume = M_PI * radius * radius * height;
   
   return volume;
}

//Function that receives radius, height and returns the volume of cone.
double getConeVol(double radius, double height) {
   double volume;
   
   volume = M_PI * radius * radius * (height / 3);
   
   return volume;
}

//Function that receives radius and returns the volume of sphere.
double getSphereVol(double radius) {
   double volume;
   
   volume = (4 * M_PI * radius * radius * radius) / 3;
   
   return volume;
}
