#include "ground_vehicle.h"

GroundVehicle::GroundVehicle(int speed, int trip_limit, std::string name)
        : Vehicle(VehicleClass::ground, speed, name), trip_limit(trip_limit) {}

int GroundVehicle::get_num_of_pauses(double inmove_time) const
{
    int num_of_pauses = static_cast<int>(inmove_time / trip_limit);
    if (num_of_pauses * trip_limit == inmove_time) {
        return num_of_pauses - 1;
    }
    return num_of_pauses;
};