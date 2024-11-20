#include "Sed.hpp"

void replace_str(std::string buffer, char **ag)
{
    std::ofstream outfile(std::string(ag[1]) + ".replace");
    std::string result;
    std::string search_str = ag[2];
    std::string replace_str = ag[3];

    size_t found_pos;
    size_t pos = 0;
    while (1)
    {
        found_pos = buffer.find(search_str, pos);
        if(found_pos != std::string::npos)
        {
            result += buffer.substr(pos, found_pos - pos);
            result += replace_str;
            pos = found_pos + search_str.length();
        }
        else break;
    }
    if (outfile.is_open())
        outfile << result;
    else std::cout << "Unable to create file" << std::endl;
    outfile.close();
}

void input_handling(char **ag)
{
    std::string line;
    std::string buffer;
    std::string file_name = ag[1];
    
    std::ifstream infile(file_name);
    if(infile.is_open())
    {
        while (std::getline(infile, line))
        {
            buffer += line + '\n';
        }
        infile.close();
        replace_str(buffer, ag);
    }
    else std::cout << "Unable to open file" << std::endl;
}
