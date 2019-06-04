#include <iostream>
#include <vector>
#include <algorithm>

void fillNumbers(std::vector<int>&);
void printNumbers(std::vector<int>&);
void average(std::vector<int>&);
void descending(std::vector<int>&);
void median(std::vector<int>&);

int main()

{
    std::vector <int> numbers;

    fillNumbers(numbers);
    printNumbers(numbers);
    average(numbers);
    median(numbers);
    descending(numbers);

    return 0;
}

void fillNumbers(std::vector<int>& newVector)

{
    std::cout << "Please type numbers " << std::endl;
    int input;
    std::cin >> input;

    while (input != 0)

    {
        newVector.push_back(input);
        std::cin >> input;
    }
    std::cout << std::endl;
}

void printNumbers(std::vector<int>& newVector)

{
    std::cout << "Numbers : ";

    for (int i = 0; i < newVector.size(); i++)
    {
        std::cout << newVector[i] << " ";
    }
    std::cout << std::endl;
}

void average(std::vector<int>& newVector)

{
    std::cout << "Average : ";
    double avg = 0; // kan også skrives "double avg(0);"

    for (int i = 0; i < newVector.size(); i++)
    {
        avg+= newVector[i];  // summeres alle vektorer
    }

    avg /= newVector.size();  // verdier deles på antall vektorer
    std::cout << avg << std::endl;

}

void median (std::vector<int>& newVector)

{
    std::cout << "Median : ";
    int median;
    for (int i = 0; i < newVector.size(); i++)

        std::sort(newVector.begin(), newVector.end());
        for (auto a : newVector)

        if (newVector.size()  % 2 == 0)
        {
            median = (newVector[newVector.size() / 2 - 1] + newVector[newVector.size() / 2]) / 2;
        }
        else
        {
            median = newVector[newVector.size() / 2];
        }

    std::cout << median << std::endl;

}

void descending(std::vector<int>& newVector)

{
    std::cout << "Descending : ";
    std::sort(newVector.begin(), newVector.end(), [](int a, int b)
    {
        return b < a;
    });
    for (auto a : newVector)
    {
        std::cout << a << " ";
    }

}