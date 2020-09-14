
#include "Klockslag.h"

int main()
{
  Klockslag::Klockslag(int sec, int min, int h)
  : seconds{sec},
    minutes{min},
    hours{h}

}

Klockslag::is_valid()
{
    bool is_true{true}

    if (   0 >= hours   || hour >= 23
        || 0 >= minutes || minutes >= 59
        || !(0<=seconds<=59))
    {
        is_true = false;
    }


    return is_true;
}
