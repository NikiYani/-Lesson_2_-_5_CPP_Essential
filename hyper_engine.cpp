#include "hyper_engine.h"
#include <iostream>

using namespace std;

int hyper_engine::counterHyperEngines = 0;

void hyper_engine::message_about_counter_hyper_engines()
{
    cout << "Creating a new object\n"
         << "counterHyperEngines: "
         << counterHyperEngines
         << "\n\n";
}

int hyper_engine::get_counter_hyper_engines()
{
    return counterHyperEngines;
}

hyper_engine::hyper_engine()
{
    ++counterHyperEngines;
    message_about_counter_hyper_engines();
}

hyper_engine::hyper_engine(int horsePower, float multiplier, int hyperPower)
{
    this->horsePower = horsePower;
    this->multiplier = multiplier;
    this-> hyperPower = hyperPower;
    ++counterHyperEngines;
    message_about_counter_hyper_engines();
}

hyper_engine::hyper_engine(const hyper_engine &hyper_engine)
{
    this->horsePower = hyper_engine.horsePower;
    this->hyperPower = hyper_engine.hyperPower;
    this->multiplier = hyper_engine.multiplier;
    ++counterHyperEngines;
    message_about_counter_hyper_engines();
}

// Inline function example

inline float hyper_engine::get_result_power_energy()
{
    return horsePower * multiplier * hyperPower;
}

bool hyper_engine::operator > (hyper_engine &hyper_engine)
{
    return this->get_result_power_energy() > hyper_engine.get_result_power_energy();
}

bool hyper_engine::operator >= (hyper_engine &hyper_engine)
{
    return this->get_result_power_energy() >= hyper_engine.get_result_power_energy();
}

bool hyper_engine::operator < (hyper_engine &hyper_engine)
{
    return this->get_result_power_energy() < hyper_engine.get_result_power_energy();
}

bool hyper_engine::operator <= (hyper_engine &hyper_engine)
{
    return this->get_result_power_energy() <= hyper_engine.get_result_power_energy();
}

int hyper_engine::get_type_code_obj() const{
    return typeCodeObj;
}

hyper_engine::~hyper_engine()
{
    --counterHyperEngines;
}
