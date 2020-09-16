#ifndef CLOCKWORK_H
#define CLOCKWORK_H


#include <string>

class Klockslag
{
public:
  Klockslag(int h, int min, int sec); //Konstruktor

  bool is_valid();
  std::string get_time();
  std::string am_or_pm();

private:
  int seconds{};
  int minutes{};
  int hours{};

};

#endif
