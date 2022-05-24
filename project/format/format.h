/*
* Форматирование строк
* Пример использования:
* std::string formatted = format::format("%s is a capital of %s", capital.c_str(), country.c_str());
* Поддерживает все флаги форматирования
* ВАЖНО: все аргументы форматирования нужно передавать как строки C-style (Примеры: mystr.c_str(), "Hello world")
*/
#ifndef NEWCPPPROJ_FORMAT_H
#define NEWCPPPROJ_FORMAT_H

#include <cstdarg>
#include <string>
#include <vector>

namespace format {

    std::string format(std::string fmt_, ...);
    std::string format(const char *fmt, ...);

} // format

#endif //NEWCPPPROJ_FORMAT_H
