#include "OperationResult.h"
#include <string>

bool OperationResult::isSucceess() {
	return this->isSuccess;
}
std::string OperationResult::getMsg()
{
	return msg;
}
OperationResult::OperationResult(bool _isSuccess, std::string _msg) {
	isSuccess = _isSuccess;
	msg = _msg;
}

OperationResult::~OperationResult()
{
}
