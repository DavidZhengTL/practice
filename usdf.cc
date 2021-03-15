#include "usdf.h"
void print(int &v,const char * name){
    std::cout<<name<<" =: ";
    std::cout<< v << std::endl;
    return;
}
void input(int & v,const char *name){
    std::cout << "Input the value of "<<"   int"<<" "<< name << " : ";
    std::cin >> v;
    return;
}

void print(string &v,const char * name){
    std::cout<<name<<" = : ";
    std::cout<< v << std::endl;
    return;
}
void input(string & v,const char *name){
    std::cout << "Input the value of "<<"string"<<" "<< name << " : ";
    std::cin >> v;
    return;
}
