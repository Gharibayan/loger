#pragma once
#include<iostream>
#include <string>
#include <fstream>
 enum logLevel{
     fatal   = 0,
     warning = 1,
     error   = 2
 };

class myLoger{
public:
    myLoger();
    void messageLog(std::string);
    void log(logLevel,std::string);
    ~myLoger();


private:
std::fstream myFile;
};

myLoger::myLoger(){
    myFile.open("myFile.txt",std::iostream::out);
    myFile<<"### Hello I'm loger"<<std::endl;
    myFile<<std::endl;
}

 myLoger::~myLoger(){
     myFile<<"### myFile is destrucing ";
     myFile.close();
 }
void myLoger::messageLog(std::string str){
    myFile << "### "<< str << std::endl;
    myFile << std::endl;

}
void myLoger::log(logLevel level,std::string str){
    switch (level)
    {
    case 0:
        myFile<<"fatal: ";
        break;
    case 1:
         myFile<<"warning: ";
        break;

    case 2:
         myFile<<"error: ";
        break;
    
    default:
        break;
    }
    myFile<< str<<std::endl<<std::endl;
}