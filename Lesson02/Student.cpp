#include "Student.h"

#include <iostream>

int Student::STUDENT_COUNTER = 0;

Student::Student(string name, int age, Gender gender, float weight, int studyYear) :
    Person(name, age, gender, weight),
    studyYear(studyYear)
{
    STUDENT_COUNTER++;
}

Student::~Student()
{
    STUDENT_COUNTER--;
}

void Student::setStudyYear(int const studyYear)
{
    this->studyYear = studyYear;
}

void Student::upYear(int const years)
{
    studyYear += years;
}

void Student::printInfo() const
{
    std::cout << "Student name is " << name
        << ", it's a " << stringifyGender()
        << ". Age: " << age
        << "; Weight: "
        << weight << "; Year of study: "
        << studyYear << std::endl;
}

void Student::printStudentsTotal()
{
    std::cout << "Total count of students: " << STUDENT_COUNTER << std::endl;
}
