#pragma once

#include "vehicle.h"

//! Базовый класс для всех наземных ТС.
class GroundVehicle : public Vehicle
{
public:
  GroundVehicle(int speed, int trip_limit, std::string name);

  //! Возвращает время на отдых.
  int get_num_of_pauses(double inmove_time) const;

  //! Время непрерывного движения до необходимого перерыва.
  int trip_limit = 0;
};