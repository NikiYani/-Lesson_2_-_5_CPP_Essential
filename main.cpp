#include <QCoreApplication>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include "number.h"
#include "hyper_engine.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Example using operator overloading

    number b(4), c(10);

    b = c;

    cout << b + c << endl;

    cout << b - c << endl;

    cout << b * c << endl;

    cout << b / c << endl;

    b = 5;

    cout << (b == c) << endl;

    cout << (b >= c) << endl;

    cout << (b > c) << endl;

    cout << (b <= c) << endl;

    cout << (b < c) << endl;

    cout << "\n";

    number *testNumber = new number(10);

    cout << "getPrivateData(*testNumber): " << getPrivateData(*testNumber) << endl;

    cout << "\n";

    delete testNumber;

    // Example using multiple inheritance and polymorphism

    hyper_engine *HEFirst = new hyper_engine(4, 0.5, 8);

    cout << "HEFirst horse power: " << HEFirst->get_horse_power() << endl;
    cout << "HEFirst hyper power: " << HEFirst->get_hyper_power() << endl;
    cout << "HEFirst multiplier: " << HEFirst->get_multiplier() << endl;
    cout << "HEFirst power energy: " << HEFirst->get_result_power_energy() << endl;

    cout << "\n";

    hyper_engine *HESecond = new hyper_engine(2, 8.4, 6);

    cout << "HESecond horse power: " << HESecond->get_horse_power() << endl;
    cout << "HESecond hyper power: " << HESecond->get_hyper_power() << endl;
    cout << "HESecond multiplier: " << HESecond->get_multiplier() << endl;
    cout << "HESecond power energy: " << HESecond->get_result_power_energy() << endl;

    cout << "\n";

    cout << "(HEFirst < HESecond): " << (HEFirst < HESecond) << endl;
    cout << "(HEFirst <= HESecond): " << (HEFirst <= HESecond) << endl;
    cout << "(HEFirst > HESecond): " << (HEFirst > HESecond) << endl;
    cout << "(HEFirst >= HESecond): " << (HEFirst >= HESecond) << endl;

    hyper_engine *copyHEFirst = new hyper_engine(*HEFirst);

    cout << "copyHEFirst horse power: " << copyHEFirst->get_horse_power() << endl;
    cout << "copyHEFirst hyper power: " << copyHEFirst->get_hyper_power() << endl;
    cout << "copyHEFirst multiplier: " << copyHEFirst->get_multiplier() << endl;
    cout << "copyHEFirst power energy: " << copyHEFirst->get_result_power_energy() << endl;

    cout << "copyHEFirst power energy: " << copyHEFirst->get_result_power_energy() << endl;

    cout << "counterHyperEngines: " << copyHEFirst->get_counter_hyper_engines() << endl;

    delete HEFirst;
    delete HESecond;
    delete copyHEFirst;

    cout << "counterHyperEngines: " << hyper_engine::get_counter_hyper_engines() << endl;

    return a.exec();
}
