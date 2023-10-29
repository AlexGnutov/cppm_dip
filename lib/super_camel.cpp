#include "super_camel.h"

SuperCamel::SuperCamel() : GroundVehicle(40, 10, "Верблюд-быстроход") {}

double SuperCamel::get_travel_time(double distance) const {
    double inmove_time = get_inmove_time(distance);
    int pauses = get_num_of_pauses(inmove_time);

    double pause_time = 0.0;
    if (pauses == 1) {
        pause_time = 5;
    } else if (pauses == 2) {
        pause_time = 6.5;
    } else if (pauses > 2) {
        pause_time = 11.5 + 8 * (pauses - 2);
    }

    return inmove_time + pause_time;
}