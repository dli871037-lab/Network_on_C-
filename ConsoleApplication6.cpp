// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//pred = inner_product(VVOD.begin(), VVOD.end(), weights.begin(), 0.0); это скалярное произведение

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    constexpr int iterations = 10;
    constexpr double maxNumberMod = 2.0;
    constexpr int countOfNumbers = 3;
    vector <double> VVOD;
    vector <double> weights = {0.1, 0.5, 1};
    double number;
    double pred, error, goal, delta;
    constexpr double alpha = 0.1;

    cout << "GOAL: ";
    cin >> goal;
    cout << "Entry 3 inputs: ";

    for (int indexOfNumbers = 0; indexOfNumbers != countOfNumbers; ++indexOfNumbers) {
        if (!(cin >> number) || number > maxNumberMod || number < -maxNumberMod) {
            cout << "INVALID\n";
            return 2;
        }
        else {
            VVOD.push_back(number);
        }
    }

    for (int index = 0; index != iterations; ++index) {
        for (int numberInVector = 0; numberInVector != VVOD.size(); ++numberInVector) {
            pred = inner_product(VVOD.begin(), VVOD.end(), weights.begin(), 0.0);
            error = pow((pred - goal), 2);
            delta = pred - goal;

        }

        
    }
    
}

