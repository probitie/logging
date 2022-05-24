//
// Created by Админ on 16.05.2022.
//

#ifndef NEWCPPPROJ_LOGGER_H
#define NEWCPPPROJ_LOGGER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>


namespace logging {

    // уровни логгера
    enum LEVEL{
        DEBUG,
        INFO,
        WARNING
    };


    class Logger {
    private:
        // минимальный уровень, при котором будут выводиться сообщения
        LEVEL level;
        // строковое представление текущего времени для сообщений логгера
        std::string getCurrentStrTime();
        // строковое представление уровня логгера
        std::string getStrLevel(LEVEL level);
    public:
        // создает логгер с указаным уровнем
        Logger(LEVEL level);

        // записать сообщение в поток с указаным уровнем ( если он меньше уровня логгера, сообщение не выведется
        int log(const std::string &message, LEVEL level);
        int debug(const std::string &message);
        int info(const std::string &message);
        int warning(const std::string &message);
    };
} // logging


#endif //NEWCPPPROJ_LOGGER_H
