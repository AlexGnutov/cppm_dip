#pragma once

#include "air_vehicle.h"

class Broom : public AirVehicle
{
public:
  Broom();

  double get_travel_time(double distance) const;
};