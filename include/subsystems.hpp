#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup intake({6,7});
// inline pros::adi::DigitalIn limit_switch('A');
inline ez::Piston matchloader('C');
inline ez::Piston hood('A');
inline ez::Piston indexer('B');