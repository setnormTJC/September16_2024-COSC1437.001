
#include <iostream>
#include <vector>


struct ShoeRecord
{
    std::string name; 
    double price; 
    int rating; //number of stars on review average 

};

struct RPGCharacter
{

};

struct Mage : RPGCharacter
{

};

struct Person//PascalCase (not camelCase)
{
    int age; //years 

    double weight; //how much they weigh 

    std::string name;
    
};

void printPeople(const std::vector<Person>& people)
{
    std::cout << "Name\tAge\tWeight\n";
    for (auto& thePerson : people) //range-based for loop 
    {
        std::cout << thePerson.name << "\t" << thePerson.age << "\t" << thePerson.weight << "\n";
    }
}

int main()
{
    Person me = { 36, 163.5, "Seth Norman" };
    Person she = { 89, 122.6, "Alice" };
   
    std::vector<Person> people = { me, she }; 
    std::cout << "The ZEROTH person in the list of people has age = " << people[0].age << "\n";
    std::cout << "The ZEROTH person in the list of people has NAME LENGTH = " << people[0].name.length() << "\n";
    people.push_back({12, 95.5, "Bob"}); //creation of a anonymous person "in place" 

    printPeople(people); 


    //ShoeRecord myShoe = { "Olympus Altra", 99.99, 123 };
    ////std::cout << myShoe << "\n"; //?


    //std::cout << "Enter number of stars for " << myShoe.name << "\n";
    //std::cin >> myShoe.rating;

    ////brace initializer syntax 

    ////myShoe.rating = 4;
    ////myShoe.name = "Altra Olympus";
    ////myShoe.price = 99.99; 

    //std::cout << myShoe.rating << "\t" << myShoe.name << "\t" << myShoe.price << "\n";


    ////int age = 123; //allows the storage of a SINGLE value
    ////vector<int> ages = { 1, "adsfasdf", 3, 4, 5}; //allows the storage (and modification) of MULTIPLE values 
    //                                      //which are all the same DATA TYPE 
    //                                      // 
    //                                  // 
    ////std::cout << "Hello World!\n";
    ////vector<Person> 
    //Person hunter; //created an "object" of the `Person` struct 

    //hunter.age = 38; //the dot is called the "member access operator" 

    //hunter.mass = 120; //lbs




}

