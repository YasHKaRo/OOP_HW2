#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

void(*arr(int* data, int size))(int* data, int size);
void invert(int* data, int size);
void decreas(int* data, int size);
void increasing(int* data, int size);
int sum(int* data, int size);

#endif