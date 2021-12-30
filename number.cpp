#include "number.h"

number::number(int data) : data(data)
{

}

number& number::operator=(const number& other)
{
    if(this != &other)
    {
        data = other.data;
    }
    return *this;
}

number& number::operator=(const int& value)
{
    data = value;
    return *this;
}

number number::operator+(const number &other) const
{
    return number(data + other.data);
}

number number::operator-(const number &other) const
{
    return number(data - other.data);
}

number number::operator*(const number &other) const
{
    return number(data * other.data);
}

number number::operator/(const number &other) const
{
    return number(data / other.data);
}

bool number::operator==(const number &other) const
{
    return (data == other.data);
}

bool number::operator>=(const number &other) const
{
    return (data >= other.data);
}

bool number::operator>(const number &other) const
{
    return (data > other.data);
}

bool number::operator<=(const number &other) const
{
    return (data <= other.data);
}

bool number::operator<(const number &other) const
{
    return (data < other.data);
}

ostream& operator<<(ostream &s, const number& number)
{
    s << "( " << number.data << " )" << endl;
    return s;
}

int getPrivateData(const number& number)
{
    return number.data;
}
