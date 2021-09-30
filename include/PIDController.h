/*
 * PIDController.h
 *
 *  Created on: Sep 30, 2021
 *      Author: gauraut(driver)
 *      Author: Abhijit Mahalle(navigator)
 */

#ifndef PIDCONTROLLER_H_
#define PIDCONTROLLER_H_

/// @class PID_Controller
/// @brief A class that computes the error and returns
/// the new velocity using the method compute
///
class PIDController {
 public:
  PIDController(); //default constructor
  PIDController(double &st, double &fv); //input argument constructor
  double setpoint = 0, finalvalue = 0; // default value

  double compute();

 private:

  double kp = 1, kd = 2, ki = 1;
};

#endif /* PIDCONTROLLER_H_ */
