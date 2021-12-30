#ifndef HYPER_BUSTER_H
#define HYPER_BUSTER_H


class hyper_buster
{
public:
    hyper_buster();
    explicit hyper_buster(int hyperPower) : hyperPower(hyperPower) {};

    int get_hyper_power() ;
    void set_hyper_power(int hyperPower);

    virtual ~hyper_buster();

    int hyperPower = 10;

};

#endif // HYPER_BUSTER_H
