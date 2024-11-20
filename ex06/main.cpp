#include "Harl.hpp"

LogLevel mapArg(const std::string& levelStr)
{
    if (levelStr == "DEBUG")
        return(LogLevel::DEBUG);
    else if (levelStr == "INFO")
        return(LogLevel::INFO);
    else if (levelStr == "WARNING")
        return(LogLevel::WARNING);
    else if (levelStr == "ERROR")
        return(LogLevel::ERROR);
    else
        return(LogLevel::INVALID);
}

int main(int ac, char *ag[])
{
    LogLevel    level;
    std::string levelStr;

    if (ac == 2)
    {
        levelStr = ag[1];
        level = mapArg(levelStr);
        if (level == LogLevel::INVALID)
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return 0;
        }
        Harl me;
        me.complain(level);
    }
    else
    {
        std::cout  << "Invalid input" << "\n"
                   << "./harlFilter \"Complaint\" " << std::endl;
    }
}