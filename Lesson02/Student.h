#pragma once
#include "Person.h"

class Student : public Person
{
    static int STUDENT_COUNTER;
    
    int studyYear;
public:
    Student(string name, int age, Gender gender, float weight, int studyYear);
    ~Student();
    
    void setStudyYear(int studyYear);
    void upYear(int years);
    void printInfo() const;
    static void printStudentsTotal();
};
