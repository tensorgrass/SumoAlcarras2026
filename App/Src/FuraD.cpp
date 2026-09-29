#include "FuraD.hpp"

FuraD::FuraD(ControllerBase* controllerBaseValue) : controller(controllerBaseValue) {
  // Constructor de FuraD, inicializa el controlador y los objetos UART
}

// prueba simple led intermitente
void FuraD::main() {
  controller->getLedStart()->turn_off();
  controller->getLedTrackerLeft()->turn_off();
  controller->getLedTrackerRight()->turn_off();

  controller->getLedDistanceCenter()->turn_off();
  controller->getLedDistanceLeft()->turn_off();
  controller->getLedDistanceRight()->turn_off();

  HAL_Delay(1000);
  controller->getLedStart()->turn_on();
  controller->getLedTrackerLeft()->turn_on();
  controller->getLedTrackerRight()->turn_on();

  controller->getLedDistanceCenter()->turn_on();
  controller->getLedDistanceLeft()->turn_on();
  controller->getLedDistanceRight()->turn_on();

  HAL_Delay(100);
  if (num_degree_left == FLAG_MIN_LEFT) {
    num_degree_left = FLAG_MAX_LEFT;
  }
  else  {
    num_degree_left = FLAG_MIN_LEFT;
  }
  if (num_degree_right == FLAG_MIN_RIGHT) {
    num_degree_right = FLAG_MAX_RIGHT;
  }
  else {
    num_degree_right = FLAG_MIN_RIGHT;
  }


//  if (num_degree_left == 10) {
//    num_degree_left = 102;
//  }
//  else  {
//    num_degree_left = 10;
//  }
//  if (num_degree_right == 103) {
//    num_degree_right = 8;
//  }
//  else {
//    num_degree_right = 103;
//  }
  HAL_Delay(3000);

  controller->getServoLeft()->setPosition(num_degree_left);
  controller->getServoRight()->setPosition(num_degree_right);

  //  -POSICION FINAL
//  controller->getServoLeft()->setPosition(102);
//  controller->getServoRight()->setPosition(8);

  //  -POSICION INICIAL
//  controller->getServoLeft()->setPosition(0);
//  controller->getServoRight()->setPosition(112);

//    controller->getServoLeft()->setPosition(10);
//    controller->getServoRight()->setPosition(107);
}
