
#include "Klockslag.h"

Klockslag::Klockslag(int sec, int min, int h)
:   seconds{sec},
    minutes{min},
    hours{h}
{

}

// int Klockslag::operator+(Time const & stuff)
// {
//     return
// }

bool Klockslag::is_valid()
{
    bool is_true{true};

    if (   0 >= hours   || hours >= 23
        || 0 >= minutes || minutes >= 59
        || !(0<=seconds<=59))
    {
        is_true = false;
    }

    return is_true;
}

std::string Klockslag::get_time(bool am_pm);
{
    std::result
    if (am_pm == true)
    {
        if (0 <= hours <= 12)
        {
            result = get_time(false);
            result += "am";
        }
        else
        {
            result = get_time(false); //ändra timmar
            result += "pm";
        }
    }
    else
    {
        std::string result = std::to_string(hours)
                     + ':' + std::to_string(minutes)
                     + ':' + std::to_string(seconds);
    }

    return result;
}
