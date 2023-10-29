#pragma once

#include <string>
#include <utility>
#include "enums.h"
#include "vehicle.h"


class Race {
public:
    Race(std::string name);

    //! Возвращает строку со списком доступных гонщиков.
    std::string get_racers_selection();

    //! Вовзращает строку с информацией о гонке.
    std::string get_race_info();

    //! Устанавливает дистанцию гонки.
    void set_distance(double value);

    //! Устанавливает гонщика по индексу.
	bool set_racer(int index);

    //! Проверяет готовность гонки к старту.
	bool is_ready();

    //! Запускает гонку.
    std::string run();

	std::string name;		///< Название гонки.
	double distance = 0;	///< Дистанция.

	int num_of_racers = 0;			///< Количество участников.
	Vehicle** racers = nullptr;		///< Транспортные средства.
	int* set_flags = nullptr;		///< Флаги участия типа ТС.
};

