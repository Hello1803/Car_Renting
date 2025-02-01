#include<iostream>
#include<string>
#include<unistd.h>  // For sleep function
using namespace std;

class vehicle {
  private:
   int age;
   string choice, address;
   char phone_no[10];
   string name;
  public:
   string car_name;  // Change type from int to string for car names
   int days = 0, Total_rent;
   
   void car_details();
   void customer_details();

   int pass() {
      string password;
      cout << "\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
      cout << "\t------------------------------";
      cout << "\n\tLOGIN \n";
      cout << "\t------------------------------\n\n";
      cout << "\tEnter Password: ";
      cin >> password;
      if (password == "*****") {
         cout << "\n\n\n\tAccess Granted! \n";
         system("PAUSE");
         system("CLS");
      } else {
         cout << "\n\n\tAccess Aborted...\n\tPlease Try Again\n\n";
         system("PAUSE");
         system("CLS");
         pass();
      }
   }

   int login() {
      cout << "\t Please Enter your details: \n";
      cout << "\n\t Enter your name: ";
      cin >> name;
      cout << "\t Enter your phone number: ";
      cin >> phone_no;
      cout << "\t Enter your address: ";
      cin >> address;
      cout << "\t Enter your age: ";
      cin >> age;
      if (age >= 18) {
         cout << "\n\t Do you have driving license: ";
         cin >> choice;
         if (choice == "yes") {
            cout << "\t You are eligible to rent a car.\n";
            system("PAUSE");
            system("CLS");
         }
      } else {
         cout << "\t you are not eligible to rent a car.";
         system("PAUSE");
         system("CLS");
      }
   }
};

void vehicle::car_details() {
   cout << "\n\nPlease select a car.\n";
   cout << "1. Maruti Suzuki\n2. Mahindra\n3. Tata\n4. BMW\n5. Audi\n6. Toyota\n7. Kia\n";
   cout << "\nSelect the car by entering its full name (e.g., 'Maruti Suzuki'):";
   cin.ignore(); // Clear the input buffer
   getline(cin, car_name);  // Use getline to allow multi-word input

   // Handle the switch-like logic using if-else statements for strings
   if (car_name == "Maruti Suzuki") {
      cout << "\nYou have chosen Maruti Suzuki";
      cout << "\nDetails are as follows:\n";
      cout << "\nRegistration Number: M3043";
      cout << "\nPrice per day: 6000 Rs/day";
   } else if (car_name == "Mahindra") {
      cout << "\nYou have chosen Mahindra.";
      cout << "\nDetails are as follows:\n";
      cout << "\nRegistration Number: M3322";
      cout << "\nPrice per day: 5000 Rs/day";
   } else if (car_name == "Tata") {
      cout << "\nYou have chosen Tata.";
      cout << "\nDetails are as follows:\n";
      cout << "\nRegistration Number: T3441";
      cout << "\nPrice per day: 7000 Rs/day";
   } else if (car_name == "BMW") {
      cout << "\nYou have chosen BMW.";
      cout << "\nDetails are as follows:\n";
      cout << "\nRegistration Number: B3478";
      cout << "\nPrice per day: 10000 Rs/day";
   } else if (car_name == "Audi") {
      cout << "\nYou have chosen Audi.";
      cout << "\nDetails are as follows:\n";
      cout << "\nRegistration Number: A3244";
      cout << "\nPrice per day: 15000 Rs/day";
   } else if (car_name == "Toyota") {
      cout << "\nYou have chosen Toyota.";
      cout << "\nDetails are as follows:\n";
      cout << "\nRegistration Number: T4738";
      cout << "\nPrice per day: 4500 Rs/day";
   } else if (car_name == "Kia") {
      cout << "\nYou have chosen Kia.";
      cout << "\nDetails are as follows:\n";
      cout << "\nRegistration Number: K9554";
      cout << "\nPrice per day: 6500 Rs/day";
   } else {
      cout << "INVALID CHOICE.";
      return;  // Exit the function if invalid input
   }

   cout << "\nEnter the days you wish to rent the car: ";
   cin >> days;
   cout << "\nPlease wait....";
   cout << "\nWe are calculating your total rent.....";
   sleep(2);

   // Calculate total rent based on the selected car
   if (car_name == "Maruti Suzuki") {
      Total_rent = days * 6000;
   } else if (car_name == "Mahindra") {
      Total_rent = days * 5000;
   } else if (car_name == "Tata") {
      Total_rent = days * 7000;
   } else if (car_name == "BMW") {
      Total_rent = days * 10000;
   } else if (car_name == "Audi") {
      Total_rent = days * 15000;
   } else if (car_name == "Toyota") {
      Total_rent = days * 4500;
   } else if (car_name == "Kia") {
      Total_rent = days * 6500;
   } else {
      cout << "Invalid choice.";
   }
}

void vehicle::customer_details() {
   cout << "\n                       Car Rental - Customer Details                  " << endl;
   cout << " ----------------------------------------------------------" << endl;
   cout << " | Invoice No. :" << "------------------|" << "#BnC92243" << " |" << endl;
   cout << " | Customer Name:" << "-----------------| " << name << " |" << endl;
   cout << " | Car Model :" << "--------------------| " << car_name << " |" << endl;
   cout << " | Number of days :" << "---------------| " << days << " |" << endl;
   cout << " | Your Rental Amount is :" << "--------| " << Total_rent << " |" << endl;
   cout << " | Caution Money :" << "----------------| " << "0" << " |" << endl;
   cout << " | Advanced :" << "---------------------| " << "0" << " |" << endl;
   cout << "  ----------------------------------------------------------" << endl;
   cout << "\n";
   cout << " | Total Rental Amount is :" << "-------| " << Total_rent << " |" << endl;
   cout << "  ________________________________________________________" << endl;
}

int main() {
   vehicle v;
   v.pass();
   v.login();
   v.car_details();
   v.customer_details();
   return 0;
}

