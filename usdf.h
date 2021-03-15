#ifndef usdf_h
#define usdf_h
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <typeinfo>
#include <string>
#define printValue(val) print(val, #val)
#define inputValue(val) input(val, #val)
using namespace std;

void print(int &v,const char * name);
void print(string &v,const char * name);

void input(int & v,const char * name);
void input(string & v,const char *name);
#endif

