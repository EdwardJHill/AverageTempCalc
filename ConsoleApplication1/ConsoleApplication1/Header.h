#pragma once
//we need a bunch of arrays here
int temps[2][24] = {
{ 19,18,17,17,16,16,16,16,17,18,18,19,20,21,22,22,22,22,22,21,20,19,18},
{ 190,180,170,170,160,160,160,160,170,180,180,190,200,210,220,22,22,22,22,21,20,19,18}
};
int averages[24] = {};
int rows = sizeof temps / sizeof temps[0];
int cols = sizeof temps[0] / sizeof(int);
float calculate(int wakeUpTime, int SleepTime);
void PrepareAverages();