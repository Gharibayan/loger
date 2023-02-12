#include <iostream>
#include "loger.hpp"
using namespace std;





int main(){
std::cout<<"hello world"<<endl;
myLoger loger;
loger.log(logLevel::error,"syntax error");
loger.messageLog("loger created succesfully ");
loger.log(logLevel::warning,"can be overflow");
}