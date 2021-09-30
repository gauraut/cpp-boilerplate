/*
 * PIDController.cpp
 *
 *  Created on: Sep 30, 2021
 *      Author: gauraut
 *      Author: Abhijit Mahalle(navigator)
 */

#include "PIDController.h"


PIDController::PIDController (double &st, double &fv) {
  setpoint = st;
  finalvalue = fv;
}
/// @fn double compute()
/// @brief
///
/// @pre
/// @post
/// @return
double PIDController::compute() {
  return 1.7;
}

