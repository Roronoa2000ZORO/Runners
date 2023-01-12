#include"runners.hpp"



int main() {
    setlocale(LC_ALL, "ru");
    int size, choice;
    Participant part;

    ifstream inputFile("out.txt");
    if (inputFile.is_open() && !inputFile.eof()) {
        inputFile >> size;
        part = Create(size);
        for (size_t i = 0; i < part.participant && !inputFile.eof(); i++) {
            inputFile >> part.individNum[i] >> part.raceResult[i];
        }
        inputFile.close();
    }
    else {
        cout << "������� ���������� ����������\n";
        cin >> size;
        part = Create(size);

        cout << "�������� ��������� ��������\n1 - ��������� �������. ����� ��������� � ��� ��������� �������������\n2 - ��������� �������. ����� ��������� � ��� ��������� � ������\n";
        cin >> choice;

        switch (choice) {
        case 1:
            FillArray(part);
            break;
        case 2:
            cout << "������� �������. ����� ��������� � ��� ���������\n";

            for (size_t i = 0; i < part.participant; i++) {
                cout << "�������������� ����� ���������: ";
                cin >> part.individNum[i];
                cout << "��������� ���������: ";
                cin >> part.raceResult[i];
            }
            break;
        default:
            break;
        }
    }

    Print(part);

    ofstream outputFile("out.txt");
    if (outputFile.is_open()) {
        outputFile << part.participant << endl;
        for (size_t i = 0; i < part.participant; i++){
            outputFile << part.individNum[i] << ' ' << part.raceResult[i] << '\n';
            if (i % 10 == 0 && i > 0) {
                outputFile << flush;
            }
        }
    }
    outputFile.close();

    DeleteArray(part);
    return 0;
}