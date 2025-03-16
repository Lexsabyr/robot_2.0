#include "robot_controller.h"
#include "simulated_motor.h"
#include "console_command_receiver.h"
#include <memory>

int main() {
    // Создаем объекты мотора и ресивера
    auto motor = std::make_unique<SimulatedMotor>();
    auto receiver = std::make_unique<ConsoleCommandReceiver>();

    // Создаем контроллер и передаем ему мотор и ресивер
    RobotController controller(std::move(motor), std::move(receiver));

    // Запускаем систему
    controller.run();

    return 0;
}