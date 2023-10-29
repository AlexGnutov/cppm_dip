#pragma once

#include "air_vehicle.h"

class Eagle : public AirVehicle
{
public:
  Eagle();

  double get_travel_time(double distance) const;
};