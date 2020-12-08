#pragma once
#include <string>

class OperationResult
{
public:
    OperationResult(bool, std::string);
    ~OperationResult();
    bool isSucceess();
    std::string getMsg();
private:
    bool isSuccess;
    std::string msg;
};