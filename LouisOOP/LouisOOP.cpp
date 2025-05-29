#include <iostream>
using std::string;

//Object Oriented Programming

class ContractEmployee { //Abstract class


  virtual void AskingForPromotion()=0; //abstract function
};

class Employee:ContractEmployee {            //need attributes (name,Company,Age) and behavior in class
private:    //Variables encapsulated
    
    string Company;
    int Age;                //integer number
    int Anciennete;         //savoir s'ils méritent une promotion

protected:
    string Name;
public:
    //SETTER METHOD
    void setName(string name) { //access private variables 
        Name = name;
    }
    //GETTER METHOD
    string getName() {
        return Name;
    }
    //SETTER METHOD 
    void setCompany(string company) {
        Company = company;
    }
    //GETTER METHOD
    string getCompany() {
        return Company;
    }
    //SETTER METHOD
    void setAge(int age) {
        if (age >= 18)

        Age = age;
    }
    //GETTER METHOD
    int getAge() {
        return Age;
    }
    //SETTER METHOD
    void setAncien(int anciennete) {
        if  (anciennete >= 10)
            
            Anciennete = anciennete;
    }
    //GETTER METHOD
    int getAncien()
    {
        return Anciennete;
    }

    void IntroduceYourself()        //class metode (A function)
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
        std::cout << "Annee dans l'entreprise - " << Anciennete << std::endl;
    }
    Employee(string name, string company, int age, int anciennete) {        //Constructor of this class
        Name = name;
        Company = company;
        Age = age;
        Anciennete = anciennete;
    }
    void AskingForPromotion() {//procedure of the class contractEmployee
        if (Anciennete >= 10)
            std::cout << Name << " can be promoted" << std::endl;   //if you have more than 10 years in the compagny you can get promoted.
        else
            std::cout << Name << " is not eleagable yet for promotion" << std::endl;
    }
    virtual void Work() {       //virtual function
        std::cout << Name << " is checking email, performing tasks" << std::endl;
    }

};

class Developer:public Employee {       //class Developer inherit from Employee
private:                                //public Employee to have access to the private variables
    string FavProgrammingLanguage;                        //Developer is child class from Employee
public:
    //setter method
    void setFavProgrammingLanguage(string favLanguage)
    {
        FavProgrammingLanguage = favLanguage;
    }
    //GETTER METHOD
    string getFavProgrammingLanguage()
    {
        return FavProgrammingLanguage;
    }

    //create constructor for Developer Class
    Developer(string name, string company, int age, int anciennete, string favProgrammingLanguage)     //mettre les variables de Employee à Developer
        :Employee(name, company, age, anciennete)
    {
        FavProgrammingLanguage = favProgrammingLanguage; //been passed to this coonstructor
    }
    void FixBug() {
        std::cout << Name << " is fixing some bugs using " << getFavProgrammingLanguage() << std::endl;
    }
    void Work() {
        std::cout << Name << " is coding and performing tasks" << std::endl; //polymorphism Work() is here and employee Class
    }

};

class Artist:public Employee {
public: 
    string Sketching;
    void preparesSketching()
    {
        std::cout << Name << " is preparing " << Sketching << " For our first character." << std::endl;
    }
    Artist(string name, string company, int age, int anciennete, string sketching)     //mettre les variables de Employee à Developer
        :Employee(name, company, age, anciennete)
    {
        Sketching = sketching;
    }
    void SketchingDrawing() {
        std::cout << Name << " is preparing " << Sketching << " For our first character." << std::endl;
    }
    void Work() {
        std::cout << Name << " is drawing, performing tasks" << std::endl;
    }
};



int main()
{
    
    Employee employee1 = Employee("Bob", "Pepsi.co", 27, 2); //variable of type Employee
    
    employee1.IntroduceYourself();
    employee1.AskingForPromotion(); //see if employee1 and 2 can be promoted
   
    Employee employee2 = Employee("Luigi", "Pepsi.co", 42, 13); //employee2 of type Employee + Constructor with string name string company and int age
    
    employee2.IntroduceYourself();
    employee2.AskingForPromotion(); //simple procedue 

    Developer a = Developer("Louis", "Pepsi.co", 21, 2, "C++");
    Developer b = Developer("Joe", "Pepsi.co", 32, 11, "JavaScript");
    a.IntroduceYourself();
    b.IntroduceYourself();
    a.FixBug();
    b.FixBug();
    a.AskingForPromotion();
    b.AskingForPromotion();


    Artist artiste1 = Artist("Gen", "Pepsi.co", 22, 6, "working on MainCharacterSketch");
    Artist artiste2 = Artist("Marlenne", "Pepsi.co", 32, 9, "working on EnnemieCharacterSketch");
    artiste1.IntroduceYourself();
    artiste2.IntroduceYourself();
    artiste1.AskingForPromotion();
    artiste2.AskingForPromotion();
    artiste1.SketchingDrawing();
    artiste2.SketchingDrawing();
    //artiste1.Work();
    //artiste2.Work();

    Employee* e1 = &employee1;
    Employee* e2 = &employee2;//pointer + can hold reference to derive class object
    Employee* e3 = &a;//devs
    Employee* e4 = &b;
    Employee* e5 = &artiste1;//artists
    Employee* e6 = &artiste2;

    //pointer
    
    e1->Work();
    
    e2->Work();
    
    e3->Work();
   
    e4->Work();
    
    e5->Work();
   
    e6->Work();
    
   
    /*
    employee1.setAge(14);//setter
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old" << std::endl;//getter
    */
   
}
/*
Constructor rules 1.Does not have a return type
                  2.Same name has the class
                  3.Must be public(mostly)

Encapsulation (getters/setters)
{
    tying together data and methods that operate on that data (Grouped together within a class)
    Purpose : Preventing anyone or anything outside of our class to be able to access our data and modify it directly.
}

Abstraction: Hiding complex things behind a procedure to make them look simple

Inheritance:parent class / child class 


Polymorphism : The ability of an object or a method to have many forms
{
Parent class reference is used to refet to an object of a child class
}

*/