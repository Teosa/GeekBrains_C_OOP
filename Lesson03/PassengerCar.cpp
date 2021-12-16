#include "PassengerCar.h"

PassengerCar::PassengerCar(std::string company, std::string model) : Car(company, model)
{
    std::cout
        << "Instance of PassengerCar; "
        << "Company name: " << company << "; "
        << "Model name: " << model << std::endl;
}
