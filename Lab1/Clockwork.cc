
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
    if (!(0 <= hours && hours <= 23)
    ||  !(0 <= minutes && minutes <= 59)
    ||  !(0 <= seconds && seconds <= 59))
    {
        is_true = false;
    }

    return is_true;
}

std::string Clockwork::get_time()
{

    std::string result = std::to_string(hours)
        + ':' + std::to_string(minutes)
        + ':' + std::to_string(seconds);
    return result;
}

std::string Clockwork::am_or_pm()
{
    std::string result;
    if (0 <= hours && hours <= 11)
    {
        if (hours == 0)
        {
            result = std::to_string(hours+12)
                + ':' + std::to_string(minutes)
                + ':' + std::to_string(seconds);
            result += " am";
        }
        else
        {
            result = std::to_string(hours)
                + ':' + std::to_string(minutes)
                + ':' + std::to_string(seconds);
            result += " am";
        }
    }
    else
    {
        result = std::to_string(hours-12)
            + ':' + std::to_string(minutes)
            + ':' + std::to_string(seconds);
        result += " pm";
    }
    return result;
}
