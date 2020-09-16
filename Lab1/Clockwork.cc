
#include "Clockwork.h"

Clockwork::Clockwork(int h, int min, int sec)
:   seconds{sec},
    minutes{min},
    hours{h}
{

}


bool Clockwork::is_valid()
{
    bool is_true{true};
    if (!(0 <= hours <= 23)
    ||  !(0 <= minutes <= 59)
    ||  !(0 <= seconds <= 59))
    {
        is_true = false;
    }

    return is_true;
}

std::string Clockwork::get_time(int new_h=hours);
{
    std::string result = std::to_string(new_h)
        + ':' + std::to_string(minutes)
        + ':' + std::to_string(seconds);
    return result;
}

std::string Clockwork::am_or_pm()
{
    if (0 <= hours <= 11)
    {
        if (hours == 0)
        {
            result = get_time(hours+12);
            result += " am";
        }
        else
        {
            result = get_time(hours-12);
            result += " am";
        }
    }
    else
    {
        result = get_time(hours-12);
        result += " pm";
    }
    return result;
}
