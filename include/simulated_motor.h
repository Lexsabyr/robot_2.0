#ifndef SIMULATED_MOTOR_H
#define SIMULATED_MOTOR_H

#include "motor.h"
#include <iostream>
#include <chrono>
#include <thread>

class SimulatedMotor : public Motor {
public:
    void forward(int time) override;
    void backward(int time) override;
    void right(int time) override;
    void left(int time) override;
    void stop() override;
};

#endif // SIMULATED_MOTOR_H