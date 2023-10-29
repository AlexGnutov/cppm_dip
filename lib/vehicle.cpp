#include "vehicle.h"

Vehicle::Vehicle(VehicleClass vehicle_class, int speed, std::string name) : vehicle_class(vehicle_class), speed(speed), name(name) {}

double Vehicle::get_inmove_time(double distance) const
{
    return distance / speed;
}