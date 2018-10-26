#ifndef LOG_H
#define LOG_H

#include <string>
#include <iostream>

class Log{
    private: 
        Log();
        
    public:
        static const Log& getInstance();
        void print(const std::string& message) const;
        virtual ~Log();

};

#endif