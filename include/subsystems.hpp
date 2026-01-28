#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(8);
inline pros::Motor hoodmotor(7);
// inline pros::adi::DigitalIn limit_switch('A');
inline ez::Piston wing('B');
inline ez::Piston ml('A');
