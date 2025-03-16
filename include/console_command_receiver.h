#ifndef CONSOLE_COMMAND_RECEIVER_H
#define CONSOLE_COMMAND_RECEIVER_H

#include "command_receiver.h"
#include <iostream>

class ConsoleCommandReceiver : public CommandReceiver {
public:
    std::string getCommand() override;
    int getTime() override;
    void notifyCommandReceived(const std::string& command, int time) override;
};

#endif // CONSOLE_COMMAND_RECEIVER_H