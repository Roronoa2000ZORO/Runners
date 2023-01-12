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

//�������� ���������� �������
Participant Create(int size);
//���������� �������
void FillArray(Participant &arr);
//����� �� �����
void Print(const Participant &arr);

//������� �������
float MyRandom(float a, float b);

//����������� �������
void DeleteArray(Participant &arr);
#endif // !RUNNERS_HPP
