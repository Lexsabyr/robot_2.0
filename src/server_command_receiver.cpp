#include "server_command_receiver.h"
#include <iostream>

std::string ServerCommandReceiver::getCommand() {
    // Здесь можно добавить логику получения команды с сервера
    std::string command = "forward"; // Пример команды
    return command;
}

int ServerCommandReceiver::getTime() {
    // Здесь можно добавить логику получения времени с сервера
    int time = 2; // Пример времени
    return time;
}

void ServerCommandReceiver::notifyCommandReceived(const std::string& command, int time) {
    std::cout << "[ServerReceiver] Command received: " << command << " for " << time << " seconds" << std::endl;
}