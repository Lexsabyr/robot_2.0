#ifndef COMMAND_RECEIVER_H
#define COMMAND_RECEIVER_H

#include <string>

class CommandReceiver {
public:
    virtual ~CommandReceiver() = default; // Виртуальный деструктор
    virtual std::string getCommand() = 0; // Чисто виртуальные методы
    virtual int getTime() = 0;
    virtual void notifyCommandReceived(const std::string& command, int time) = 0;
};

#endif // COMMAND_RECEIVER_H