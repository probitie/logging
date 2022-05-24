//
// Created by Админ on 16.05.2022.
//

#include "Logger.h"

namespace logging {
    std::string Logger::getCurrentStrTime() {
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);

        std::ostringstream oss;
        oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
        return oss.str();
    }

    std::string Logger::getStrLevel(LEVEL level)
    {
        switch (level) {
            case DEBUG:
                return "DEBUG";
            case INFO:
                return "INFO";
            case WARNING:
                return "WARNING";
            default:
                return "UNKNOWN";
        }
    }

    Logger::Logger(LEVEL level): level{level}
    {
        std::string msg = "logger initialised with level";
        this->log(msg, DEBUG);
    }

    int Logger::log(const std::string &message, LEVEL level)
    {

        if(level >= this->level)
        {
            std::cout << getCurrentStrTime() << " | " << getStrLevel(level) << "\t| " << message << "\n";
        }
        return 0;
    }

    int Logger::debug(const std::string &message)
    {
        return this->log(message, DEBUG);
    };
    int Logger::info(const std::string &message)
    {
        return this->log(message, INFO);
    };
    int Logger::warning(const std::string &message)
    {
        return this->log(message, WARNING);
    };


} // logging