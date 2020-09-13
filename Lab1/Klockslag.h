#ifndef KLOCKSLAG_H
#define KLOCKSLAG_H

#include <string>

Class Klockslag
{
public:
  Klockslag(int sec, int min, int h); //Konstruktor

  std::string get_time();

private:
  int seconds{};
  int minutes{};
  int hours{};

};

#endif
