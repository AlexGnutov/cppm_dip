#pragma once

#include <string>
#include <utility>
#include "enums.h"
#include "vehicle.h"


class Race {
public:
    explicit Race(std::string name) :name(std::move(name)) {}

    std::string get_racers_selection();

    std::string get_race_info();

    void set_distance(double value);

	bool set_racer(int index);

	bool is_ready();

    std::string run();

	std::string name;		///<
	double distance = 0;	///<

	int num_of_racers = 0;			///<
	Vehicle** racers = nullptr;		///<
	int* set_flags = nullptr;		///<
};

