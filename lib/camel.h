#pragma once

#include "ground_vehicle.h"

class Camel : public GroundVehicle
{
public:
  Camel();
  
  double get_travel_time(double distance) const;
};