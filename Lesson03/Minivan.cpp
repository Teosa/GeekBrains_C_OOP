#include "Minivan.h"

Minivan::Minivan(std::string company, std::string model) :
    Car(company, model),
    PassengerCar(company, model),
    Bus(company, model)
{
    std::cout
        << "Instance of Minivan; "
        << "Company name: " << company << "; "
        << "Model name: " << model << std::endl;
}
