#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

enum class LogLevel
{
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3,
    INVALID = 4
};

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl(){};
        void complain(LogLevel level);
        ~Harl(){};
};

#endif