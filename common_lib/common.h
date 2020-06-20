#pragma once

#include <iostream>
#include <vector>
#include <unordered_map>
#include <functional>

using namespace std;

// recieve a Integer number
int GiveMeAnInteger();

// recieve an Array Integer numbers
void LoopInputNumberToCall(std::function<void(char* input)> func);

// recieve two Array Integer numbers
void LoopInputNumberToCall2(std::function<void(char* input1, char* input2)> func);

// return is char or number
bool isCharOrNumber(char c);
