#include <iostream>

using namespace std;

class number
{
public:
    explicit number(int data);

    number& operator=(const number& other);

    number& operator=(const int& value);

    number operator+(const number& other) const;

    number operator-(const number& other) const;

    number operator*(const number& other) const;

    number operator/(const number& other) const;

    bool operator==(const number& other) const;

    bool operator >= (const number& other) const;

    bool operator > (const number& other) const;

    bool operator <= (const number& other) const;

    bool operator < (const number& other) const;

    friend ostream& operator<<(ostream &s, const number& number);

    friend int getPrivateData(const number& number);

private:
    int data;
};
