#ifndef HYPER_ENGINE_H
#define HYPER_ENGINE_H

#include "engine.h"
#include "hyper_buster.h"

class hyper_engine : public engine,
                     public hyper_buster
{
public:
    hyper_engine();
    hyper_engine(int horsePower, float multiplier, int hyperPower);
    explicit hyper_engine(const hyper_engine &hyper_engine);

    inline float get_result_power_energy();

    bool operator > (hyper_engine &hyper_engine);
    bool operator >= (hyper_engine &hyper_engine);
    bool operator < (hyper_engine &hyper_engine);
    bool operator <= (hyper_engine &hyper_engine);

    int get_type_code_obj() const;
    static int get_counter_hyper_engines();
    static void message_about_counter_hyper_engines();

    ~hyper_engine();

private:
    const int typeCodeObj = 10;
    static int counterHyperEngines;
};

#endif // HYPER_ENGINE_H
