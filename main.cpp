// Author: Fransiskus Agapa

// =============================
// practice using getline and cin in c++
// =============================
#include <iostream>
#include "string"
#include "cctype"

// =================================
// simple program = to take user input to practice cin and getline
//
// =================================

using std::string;
using std::getline;

using std::isdigit;                            // check user input is digit or not
using std::islower;                            // check user input is lower or not

int main()
{
    string fullName;
    string shortName;
    string schoolFullName;
    string schoolShortName;
    string tempStr;                                // take last name of user
    char userChoice;

   std::cout << "\n== Student Name and School ==" << std::endl;
   std::cout << "1. Full name" << std::endl;
   std::cout << "2. Short name" << std::endl;
   std::cout << "3. Full school name" << std::endl;
   std::cout << "4. Short school name" << std::endl;
   std::cout << "choice: ";
   std::cin >> userChoice;
   std::cout << std::endl;

   while(userChoice != 'e' and userChoice != 'E')
   {
       if(userChoice == '1')
       {
           string tempStr;                                // take last name of user
           std::cout << "\nWhat is your full name: ";
           std::cin >> fullName;
           getline(std::cin, tempStr);
           fullName += tempStr;
           std::cout << "\nYour full name is " << fullName << std::endl;
       }

       else if(userChoice == '2')
       {
           std::cout << "\nWhat is your preferred name: ";
           std::cout << std::endl;
           std::cin >> shortName;
           std::cout << "\nHey " << shortName << " it is good to meet you! " << std::endl;
       }

       else if(userChoice == '3')
       {
           std::cout << "\nWhat is the name of school you go to: ";
           std::cin >>schoolFullName;
           getline(std::cin, tempStr);
           schoolFullName += tempStr;
           std::cout << "\nYou are going to school at " << schoolFullName << '!' << std::endl;
       }

       else if(userChoice == '4')
       {
           std::cout << "\nWhat is the short name of your school: ";
           std::cin >> schoolShortName;
           std::cout << "\nYour school are also called " << schoolShortName << std::endl;
       }

       else
       {
           std::cout << "\n[ Invalid choice ]" << std::endl;
       }


       std::cout << "\n== Student Name and School ==" << std::endl;
       std::cout << "1. Full name" << std::endl;
       std::cout << "2. Short name" << std::endl;
       std::cout << "3. Full school name" << std::endl;
       std::cout << "4. Short school name" << std::endl;
       std::cout << "choice: ";
       std::cin >> userChoice;

   }

   if(userChoice == 'e' or userChoice == 'E')
       std::cout << "\n== Exit Program ==" << std::endl;

    return 0;
}
