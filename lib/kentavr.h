#pragma once

#include "ground_vehicle.h"

class Kentavr : public GroundVehicle
{
public:
  Kentavr();

  double get_travel_time(double distance) const;
};