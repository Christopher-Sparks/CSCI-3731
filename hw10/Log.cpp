#include "Log.h"
#include <iostream>

Log::Log(){
}

Log::~Log(){
}

const Log& Log::getInstance(){
    static Log instance;
    return instance;
}

void Log::print(const std::string& message) const{
    std::cout<<message<<std::endl;
}

