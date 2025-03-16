#include "console_command_receiver.h"

std::string ConsoleCommandReceiver::getCommand() {
    std::string command;
    std::cout << "Enter command (forward, backward, right, left, stop): ";
    std::cin >> command;
    return command;
}

int ConsoleCommandReceiver::getTime() {
    int time;
    std::cout << "Enter time in seconds: ";
    std::cin >> time;
    return time;
}

void ConsoleCommandReceiver::notifyCommandReceived(const std::string& command, int time) {
    if (command == "stop") {
        std::cout << "[ConsoleReceiver] Command received: " << command << std::endl;
    } else {
        std::cout << "[ConsoleReceiver] Command received: " << command << " for " << time << " seconds" << std::endl;
    }
}