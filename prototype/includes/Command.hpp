#ifndef __COMMAND_H__
#define __COMMAND_H__
#include <string>

class Command
{   
public:

    Command(/* args */);
    ~Command();
    
    bool execute();
    std::string getDescription(); 

};



#endif // __COMMAND_H__