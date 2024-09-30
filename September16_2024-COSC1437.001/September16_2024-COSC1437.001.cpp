
#include "iostream"
#include "vector"

//quotes are for "your own" 
//angle brackets are for "standard ones" 
//g++
//msvc

#include"iomanip"

#include"someStructDefinitions.h"


using std::left; 
using std::cout; 
using std::setw; //aliases 
using std::cin; 

int main()
{



    auto thePerson = makePerson(); 
    
    cout << "Resulting person has the following attributes: \n";
    
    std::cout << std::left << std::setw(15) << "Name";
    std::cout << std::left << std::setw(5) << "Age";
    std::cout << std::left << std::setw(10) << "Weight";
    cout << "\n";

    std::cout << std::left << setw(15) << thePerson.name;
    std::cout << std::left << setw(5) << thePerson.age;
    cout << left << setw(10) << thePerson.weight << "\n";

    //Person otherPerson = { 7, 43.5, "Abby" };

    //addOneToAge(otherPerson); 

    //cout << "Was the age updated? (from 7 to 8)? " << otherPerson.age << "\n";
    //otherPerson.age = 123; 
    //otherPerson.name = "Some name"; 

    //Person me = { 36, 163.5, "Seth Norman" };
    //Person she = { 89, 122.6, "Alice" };
   
    //std::vector<Person> people = { me, she }; 

    //std::cout << "The ZEROTH person in the list of people has age = " << people[0].age << "\n";
    //std::cout << "The ZEROTH person in the list of people has NAME LENGTH = " << people[0].name.length() << "\n";
    //people.push_back({12, 95.5, "Bob"}); //creation of a anonymous person "inplace" 

    //printPeople(people); 

    //cout << "Adding a NEW person to the list: \n";
    //system("pause"); 
    //system("CLS"); 
    //cout << "Enter the person's age, weight, and name:\n";
    //Person newPerson; 
    //cin >> newPerson.age>> newPerson.weight>> newPerson.name;
    ////if (cin.fail())
    ////{
    ////    cin.clear()
    ////}


    //people.push_back(newPerson);

    //cout << "\n\nUpdated list contains:\n";
    //printPeople(people); 

    ////std::sort()

    //if (newPerson.age > me.age)
    //{
    //    cout << "The new person is old than me\n";
    //}

    ////std::filesystem;
    ////std::chrono


    //if (she.name.length() > me.name.length())
    //{
    //    cout << she.name << " is a longer name than " << me.name << "\n";
    //}

    ////ShoeRecord myShoe = { "Olympus Altra", 99.99, 123 };
    //////std::cout << myShoe << "\n"; //?


    ////std::cout << "Enter number of stars for " << myShoe.name << "\n";
    ////std::cin >> myShoe.rating;

    //////brace initializer syntax 

    //////myShoe.rating = 4;
    //////myShoe.name = "Altra Olympus";
    //////myShoe.price = 99.99; 

    ////std::cout << myShoe.rating << "\t" << myShoe.name << "\t" << myShoe.price << "\n";


    //////int age = 123; //allows the storage of a SINGLE value
    //////vector<int> ages = { 1, "adsfasdf", 3, 4, 5}; //allows the storage (and modification) of MULTIPLE values 
    ////                                      //which are all the same DATA TYPE 
    ////                                      // 
    ////                                  // 
    //////std::cout << "Hello World!\n";
    //////vector<Person> 
    ////Person hunter; //created an "object" of the `Person` struct 

    ////hunter.age = 38; //the dot is called the "member access operator" 

    ////hunter.mass = 120; //lbs




}

