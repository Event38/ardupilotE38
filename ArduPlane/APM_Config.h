// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// This file is just a placeholder for your configuration file.  If
// you wish to change any of the setup parameters from their default
// values, place the appropriate #define statements here.

// If you used to define your CONFIG_APM_HARDWARE setting here, it is no
// longer valid! You should switch to using CONFIG_HAL_BOARD via the HAL_BOARD
// flag in your local config.mk instead.

#ifndef LAND_SLOPE
 # define LAND_SLOPE       0     // default value for land_slope
#endif

#ifndef LAND_OFFSET
 # define LAND_OFFSET      0     // default value for my land_offset
#endif

#ifndef APP_PITCH_MIN
 # define APP_PITCH_MIN    -4500     // default value for my approach pitch limit
#endif