#ifndef RUNNERS_HPP
#define RUNNERS_HPP

#include <iostream>
#include <random>
#include <fstream>
using namespace std;


struct Participant {
    int participant;
    int *individNum;
    float *raceResult;
};

//Создание двумерного массива
Participant Create(int size);
//Заполнение массива
void FillArray(Participant &arr);
//Вывод на экран
void Print(const Participant &arr);

//Функция рандома
float MyRandom(float a, float b);

//Уничтожение массива
void DeleteArray(Participant &arr);
#endif // !RUNNERS_HPP
