#pragma once

#include "air_vehicle.h"

class TeppichJet : public AirVehicle {
public:
  TeppichJet();

  double get_travel_time(double distance) const;
};