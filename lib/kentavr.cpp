#include "kentavr.h"

Kentavr::Kentavr() : GroundVehicle(15, 8, "Кентавр") {}

double Kentavr::get_travel_time(double distance) const {
    double inmove_time = get_inmove_time(distance);
    double pauses = get_num_of_pauses(inmove_time);

    return inmove_time + pauses * 2;
}