#pragma once

#include "ground_vehicle.h"

class OffroadShoes : public GroundVehicle
{
public:
  OffroadShoes();
  
  double get_travel_time(double distance) const;
};