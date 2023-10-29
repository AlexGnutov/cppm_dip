#include "camel.h"

Camel::Camel() : GroundVehicle(10, 30, "Верблюд") {

}

double Camel::get_travel_time(double distance) const {
    double inmove_time = get_inmove_time(distance);
    int pauses = get_num_of_pauses(inmove_time);

    double pause_time = 0.0;
    if (pauses == 1) {
        pause_time = 5;
    } else if (pauses > 1) {
        pause_time = 5 + 8 * (pauses - 1);
    }

    return inmove_time + pause_time;
}