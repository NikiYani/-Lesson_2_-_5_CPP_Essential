#ifndef ENGINE_H
#define ENGINE_H


class engine
{
public:
    engine();
    engine(int horsePower, float multiplier) : horsePower(horsePower), multiplier(multiplier) {};

    int get_horse_power() ;
    void set_horse_power(int horsePower);

    float get_multiplier();
    void set_multiplier(float multiplier);

    virtual ~engine();

    int horsePower = 20;
    float multiplier = 30;
};

#endif // ENGINE_H
