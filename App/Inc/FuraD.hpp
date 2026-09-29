#ifndef FuraD_HPP
#define FuraD_HPP

#include <ControllerBase.hpp>

#define FLAG_MIN_LEFT 109//103
#define FLAG_MAX_LEFT 14//8

#define FLAG_MIN_RIGHT 3//10
#define FLAG_MAX_RIGHT 96//103

class FuraD  {
   public:
    FuraD(ControllerBase* controllerBaseValue);

    void main();
   private:
    ControllerBase* controller; // Puntero al controlador base

    volatile uint32_t num_ms = 0;
    volatile uint32_t time_tick_ini = 0;

    volatile uint16_t num_degree_left = FLAG_MIN_LEFT;
    volatile uint16_t num_degree_right = FLAG_MIN_RIGHT;
    volatile uint16_t direction = 0;
};

#endif  // FuraD_HPP
