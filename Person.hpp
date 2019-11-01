#ifndef Person_hpp
#define Person_hpp
//
//  Person.hpp
//  Lesson1
//
//  Created by Aiden Barrett on 01/11/2019.
//  Copyright © 2019 Aiden Barrett. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

// Interface class doesn't havea constructor
class Person {

public:
    // Setter Methods
    virtual void setName(string nme) = 0; // Pure virtual functions
    virtual void setAge(int ag);
    virtual void setGender(char gdr);
    
    enum Mood { Happy, Sad, Energetic, Moody };

    friend ostream &operator<<(ostream &os, const Person &person)
    {
        return os << "I am a person and my name is: " << person.age << endl;
    }
        
    string as_string();

protected:
    string name;
    int age;
    char gender;
    Mood mood;
};

void Person::setAge(int ag)
{
    age = ag;
}

void Person::setGender(char g)
{
    gender = g;
}
        
string Person::as_string()
{
    switch(mood){
    case Happy      : return "Happy";
    case Sad        : return "Sad";
    case Energetic  : return "Energetic";
    case Moody      : return "Moody";
    default         : return "Invalid";
    }
}


#endif /* Person_hpp */
