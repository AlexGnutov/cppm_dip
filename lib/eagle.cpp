#include "eagle.h"

Eagle::Eagle() : AirVehicle(8, "Орёл") {}

double Eagle::get_travel_time(double distance) const {
    return get_inmove_time(distance * 0.94);
}