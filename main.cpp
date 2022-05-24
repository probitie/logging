#include <iostream>
#include "project/logger/Logger.h"
#include "project/format/format.h"


logging::Logger logger(logging::DEBUG);

int main()
{
    std::string country = "Great Britain";
    std::string capital = "London";
    std::string formatted = format::format("%s is a capital of %s", capital.c_str(), country.c_str());
    logger.info(formatted);

    return 0;
}