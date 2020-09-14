#ifndef KLOCKSLAG_H
#define KLOCKSLAG_H


#include <string>

class Klockslag
{
public:
  Klockslag(int sec, int min, int h); //Konstruktor

  bool is_valid();
  std::string get_time();

private:
  int seconds{};
  int minutes{};
  int hours{};

};

#endif
