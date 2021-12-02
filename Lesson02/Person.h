#pragma once
#include <string>

using std::string;

enum Gender { MAN, WOMEN };

class Person
{
protected:
    string name;
    int age;
    Gender gender;
    float weight;

    string stringifyGender() const;
public:
    Person(string name, int age, Gender gender, float weight);
    
    void setName(string name);
    void setAge(int age);
    void setWeight(float weight);
};
