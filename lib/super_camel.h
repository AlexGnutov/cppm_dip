#pragma once

#include "ground_vehicle.h"

class SuperCamel : public GroundVehicle {
public:
    SuperCamel();

    double get_travel_time(double distance) const;
};