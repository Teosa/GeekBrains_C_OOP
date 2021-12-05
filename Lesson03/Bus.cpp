#include "Bus.h"

Bus::Bus(std::string company, std::string model) : Car(company, model)
{
    std::cout
        << "Instance of Bus; "
        << "Company name: " << company << "; "
        << "Model name: " << model << std::endl;
}
