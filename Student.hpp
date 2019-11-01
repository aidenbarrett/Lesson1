#ifndef Student_hpp
#define Student_hpp

//
//  Student.hpp
//  Lesson1
//
//  Created by Aiden Barrett on 01/11/2019.
//  Copyright © 2019 Aiden Barrett. All rights reserved.
//

#include <iostream>
#include <string>

#include "Person.hpp"

using namespace std;

class Student : public Person {

public:
    // Student(string major, string minor, int id, string name, int age, char gender)
    //     : major(major), minor(minor), id(id), name(name), age(age), gender(gender) {}

    Student() { cout << "Default constructor for student" << endl;  }

    Student(string major, string minor, int id, string name, int age, char gender, string uniClass, char grade, Mood mood = Happy){
        cout << "Non-default student constructor created 2" << endl;
        this->major = major;
        this->minor = minor;
        this->id = id;
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->uniClass = uniClass;
        this->grade = grade;
        this->mood = mood;
    }
    
    void swapName(Student& student);
    
    // Setter Methods
    void setMajor(string mjr);
    void setMinor(string mnr);
    void setId(int _id);
    void setName(string nme);
    void setAge(int ag);
    void setGender(char g);
    void setGrade(char gr);

    // Getter Methods
    string getMajor();
    string getMinor();
    int getId();
    string getUniClass();
    string getName();
    char getGrade();

private:
    string major;
    string minor;
    int id;
    string uniClass;
    char grade;
};

// Setter Method
void Student::setMajor(string mjr)
{
    // cout << "Original value: " << major << endl;
    // cout << "Parameter value: " << mjr << endl;
    major = mjr;
    cout << "Original value was set to: " << major << endl;
}
// Getter Method
string Student::getMajor()
{
    return major;
}
// Setter Method
void Student::setMinor(string mnr)
{
    minor = mnr;
}
// Getter Method
string Student::getMinor()
{
    return minor;
}
// Setter Method
void Student::setId(int _id)
{
    id = _id;
}
// Getter Method
int Student::getId()
{
    return id;
}

void Student::setName(string nme)
{
    name = nme;
}

string Student::getName()
{
    return name;
}

void Student::setAge(int ag)
{
    age = ag;
}

void Student::setGender(char g)
{
    gender = g;
}

string Student::getUniClass()
{
    return uniClass;
}

void Student::setGrade(char gr)
{
    grade = gr;
}

char Student::getGrade()
{
    return grade;
}

void Student::swapName(Student& student)
{
    using std::swap;
    swap(name, student.name);
}





#endif /* Student_hpp */
