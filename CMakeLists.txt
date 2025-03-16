cmake_minimum_required(VERSION 3.10)
project(MotorControl)

set(CMAKE_CXX_STANDARD 14)

# Добавляем исполняемый файл
add_executable(MotorControl
    src/main.cpp
    src/simulated_motor.cpp
    src/console_command_receiver.cpp
    src/server_command_receiver.cpp 
    src/robot_controller.cpp
)

# Указываем путь к заголовочным файлам
target_include_directories(MotorControl PRIVATE include)