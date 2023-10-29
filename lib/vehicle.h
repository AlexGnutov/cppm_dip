#pragma once

#include <string>

//! Классы ТС с т.з. возможности передвижения.
enum class VehicleClass
{
  ground,
  air
};

//! Базовый класс для ТС.
class Vehicle
{
public:
  Vehicle(VehicleClass vehicle_class, int speed, std::string name);

  //! Возвращает время в пути в зависимости от расстояния. 
  virtual double get_travel_time(double distance) const = 0;

  //! Вовзращает время в движении.  
  double get_inmove_time(double distance) const;

  VehicleClass vehicle_class;
  int speed = 0;
  std::string name = "";
};