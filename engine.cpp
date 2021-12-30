#include "engine.h"

engine::engine()
{

}

engine::~engine()
{

}


int engine::get_horse_power()
{
    return horsePower;
}

void engine::set_horse_power(int horsePower)
{
    this->horsePower = horsePower;
}

float engine::get_multiplier()
{
    return multiplier;
}

void engine::set_multiplier(float multiplier)
{
    this->multiplier = multiplier;
}


