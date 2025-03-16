#include "robot_controller.h"
#include <iostream>

RobotController::RobotController(std::unique_ptr<Motor> motor, std::unique_ptr<CommandReceiver> receiver)
    : motor(std::move(motor)), receiver(std::move(receiver)) {}

void RobotController::run() {
    while (true) {
        std::string command = receiver->getCommand(); // Получаем команду

        if (command == "forward" || command == "backward" || command == "right" || command == "left") {
            int time = receiver->getTime(); // Получаем время
            receiver->notifyCommandReceived(command, time); // Уведомляем о команде

            if (command == "forward") {
                motor->forward(time * 1000); // Движение вперед
            } else if (command == "backward") {
                motor->backward(time * 1000); // Движение назад
            } else if (command == "right") {
                motor->right(time * 1000); // Поворот вправо
            } else if (command == "left") {
                motor->left(time * 1000); // Поворот влево
            }
        } else if (command == "stop") {
            receiver->notifyCommandReceived(command, 0); // Уведомляем о команде "стоп"
            motor->stop(); // Останавливаем двигатели
        } else {
            std::cout << "[System] Unknown command received: " << command << std::endl; // Неизвестная команда
        }
    }
}