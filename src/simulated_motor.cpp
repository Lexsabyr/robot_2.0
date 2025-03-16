#include "simulated_motor.h"

void SimulatedMotor::forward(int time) {
    std::cout << "[SimulatedMotor] Moving forward for " << time << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

void SimulatedMotor::backward(int time) {
    std::cout << "[SimulatedMotor] Moving backward for " << time << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

void SimulatedMotor::right(int time) {
    std::cout << "[SimulatedMotor] Turning right for " << time << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

void SimulatedMotor::left(int time) {
    std::cout << "[SimulatedMotor] Turning left for " << time << " ms" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

void SimulatedMotor::stop() {
    std::cout << "[SimulatedMotor] Stopping" << std::endl;
}