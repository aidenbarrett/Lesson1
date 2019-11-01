#ifndef Lecturer_hpp
#define Lecturer_hpp
//
//  Lecturer.hpp
//  Lesson1
//
//  Created by Aiden Barrett on 01/11/2019.
//  Copyright © 2019 Aiden Barrett. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

#include "Person.hpp"
#include "Student.hpp"
//#include </Users/aidenbarrett/Dev/Lesson1/Lesson1/boost_1_71_0/optional.hpp>

using namespace std;

class Lecturer : public Person {

public:
    // Lecturer(string department, string specialization, string name, int age, char gender)
    //     : department(department), specialization(specialization), name(name), age(age), gender(gender) {}

    Lecturer() { cout << "Default constructor for lecturer" << endl; }
    
    Lecturer(string department, string specialization, string name, int age, char gender, string uniClass, Mood mood = Happy){
        cout << "Non-default lecturer constructor created 1" << endl;
        this->department = department;
        this->specialization = specialization;
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->uniClass = uniClass;
        this->mood = mood;
    }

    // Class Methods
    void addStudent(Student student);
    void alterGrade(Student& student, char grade);
    Student& findStudentByName(string na);

    // Setter Methods
    void setDepartment(string dprt);
    void setSpecialization(string splz);
    void setName(string nme);
    void setAge(int ag);
    void setGender(char g);

    // Getter Methods
    string getDepartment();
    string getSpecialization();
    string getUniClass();


    int getStudentsSize();
    vector<Student> getStudents();

private:
    string department;
    string specialization;
    vector<Student> students;
    string uniClass;
};

void Lecturer::setDepartment(string dprt)
{
    department = dprt;
}
string Lecturer::getDepartment()
{
    return department;
}

void Lecturer::setSpecialization(string splz)
{
    specialization = splz;
}
string Lecturer::getSpecialization()
{
    return specialization;
}

void Lecturer::addStudent(Student student)
{
    cout << student.getName() << endl;
    students.push_back(student);
}

int Lecturer::getStudentsSize()
{
    //return students.size(); //this warns about implicit type conversion from unsigned long to int
    int size = static_cast<int>(students.size());
    return size;
}

vector<Student> Lecturer::getStudents()
{
    return students;
}

void Lecturer::setName(string nme)
{
    name = nme;
}

void Lecturer::setAge(int ag)
{
    age = ag;
}

void Lecturer::setGender(char g)
{
    gender = g;
}

string Lecturer::getUniClass()
{
    return uniClass;
}

//boost::optional<Student&>Lecturer::findStudentByName(string na)
//{
//    for(Student& student : students)
//    {
//        if (student.getName().compare(na) == 0)
//        {
//            return student;
//        }
//    }
//    return boost::optional<Student&>Lecturer::findStudentByName()
//}

// function gives the ability to overwrite another classes instance variable.
void Lecturer::alterGrade(Student& student, char grade)
{
    student.setGrade(grade);
}


#endif /* Lecturer_hpp */
