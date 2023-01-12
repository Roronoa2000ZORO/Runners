#include"runners.hpp"

Participant Create(int size) {
    Participant result;
    result.participant = size;
    result.individNum = new int[size];
    result.raceResult = new float[size];
    return result;
}

void FillArray(Participant &arr) {
    for (size_t i = 0; i < arr.participant; i++) {
        arr.individNum[i] = i + 1;
        arr.raceResult[i] = MyRandom(4.90, 20.3);
    }
    cout << endl;
}

void Print(const Participant &arr) {
    for (size_t i = 0; i < arr.participant; i++) {
        cout << arr.individNum[i] << ' ';
        cout << arr.raceResult[i] << endl;
    }
    cout << endl;
}

float MyRandom(float a, float b) {
    static mt19937 gen(random_device{}());
    uniform_real_distribution<float> dis(a, b);
    return (nearbyint(dis(gen) * 100)) / 100;
}

void DeleteArray(Participant &arr) {
    arr.participant = 0;
    delete[] arr.individNum;
    arr.individNum = nullptr;
    delete[] arr.raceResult;
    arr.raceResult = nullptr;
}