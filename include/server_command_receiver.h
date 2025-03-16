#ifndef SERVER_COMMAND_RECEIVER_H
#define SERVER_COMMAND_RECEIVER_H

#include "command_receiver.h"
#include <string>

class ServerCommandReceiver : public CommandReceiver {
public:
    std::string getCommand() override;
    int getTime() override;
    void notifyCommandReceived(const std::string& command, int time) override;
};

#endif // SERVER_COMMAND_RECEIVER_H