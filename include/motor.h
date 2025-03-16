#ifndef MOTOR_H
#define MOTOR_H

class Motor {
public:
    virtual ~Motor() = default; // Виртуальный деструктор для корректного удаления объектов
    virtual void forward(int time) = 0; // Чисто виртуальные методы
    virtual void backward(int time) = 0;
    virtual void right(int time) = 0;
    virtual void left(int time) = 0;
    virtual void stop() = 0;
};

#endif // MOTOR_H
