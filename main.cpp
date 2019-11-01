//
//  main.cpp
//  Lesson1
//
//  Created by Aiden Barrett on 01/11/2019.
//  Copyright © 2019 Aiden Barrett. All rights reserved.
//

#include <iostream>
#include <string>

#include "Person.hpp"
#include "Lecturer.hpp"
#include "Student.hpp"

int main()
{
    Lecturer();
    // Creates a vector of lecturers called lecturers
    vector<Lecturer> lecturers;
    // Assigns all of the Lecturer properties and pushes them on the vector
    lecturers.push_back(Lecturer("Computing", "Advanced Programming", "John", 40, 'm', "AB101"));
    lecturers.push_back(Lecturer("Business", "Finance", "Dave", 42, 'm', "AB102"));
    lecturers.push_back(Lecturer("Science", "Physics", "Bill", 46, 'm', "AB103"));

    vector<Student> students;
    students.push_back(Student("Computer Science", "Maths", 123, "Mike", 20, 'm', "AB101", 'c'));
    students.push_back(Student("Business", "Economics", 142, "Jill", 21, 'f', "AB102", 'c'));
    students.push_back(Student("Engineering", "Physics", 151, "Mary", 19, 'f', "AB103", 'c'));

    // Loops through all of the lecturers
    for(Lecturer& lecturer : lecturers)
    {
        // Loops through all of the students
        for(Student& student : students)
        {
            // If the lecturers and students have a matching uni class
            if (lecturer.getUniClass().compare(student.getUniClass()) == 0)
            {
                // Add the student to the lecturer
                lecturer.addStudent(student);
            }
        }
    }
    // Loops through all the lecturers
    for(Lecturer& lecturer : lecturers)
    {
        // Gets the number of students assigned to each lecturer
        cout << lecturer.getStudentsSize() << endl;
    }

    cout << "Grade before: " << students.at(0).getGrade() << endl;
    lecturers.at(0).alterGrade(students.at(0), 'a');
    cout << "Grade after: " << students.at(0).getGrade() << endl;
    
    cout << "String: " << students.at(0).as_string() << endl;
    
    cout << "Student at 0: " << students.at(0).getName() << endl;
    cout << "Student at 2: " << students.at(2).getName() << endl;
    students.at(0).swapName(students.at(2));
    cout << "Student at 2: " << students.at(2).getName() << endl;

//    cout << "Grade before: " << lecturers.at(0).findStudentByName("Mike").getGrade() << endl;
//    lecturers.at(0).alterGrade(lecturers.at(0).findStudentByName("Mike"), 'a');
//    cout << "Grade after: " << lecturers.at(0).findStudentByName("Mike").getGrade() << endl;
}
