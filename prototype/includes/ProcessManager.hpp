#ifndef __PROCESSMANAGER_H__
#define __PROCESSMANAGER_H__
#include <string>

class ProcessManager
{
private:
    /* data */
public:
    ProcessManager(/* args */);
    ~ProcessManager();

    int startProcess(std::string path);
    bool stopProcess(std::string path);
    bool isProcessRunning(int processId);
};



#endif // __PROCESSMANAGER_H__