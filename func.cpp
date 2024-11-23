#include <iostream>
#include "func.hpp"

void readMatrix(int matrix[N_Max][N_Max], int& n)
{
    std::cout << "enter n: ";
    std::cin >> n;
    std::cout << "enter matrix elements: " << std::endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool checkColumn(int matrix[N_Max][N_Max], int n, int col)
{
    int sum = 0;
    bool hasPrime = false;

    for (int row = 0; row < n; row++)
    {
        int value = matrix[row][col];
        sum += value;
        if (isPrime(value))
        {
            hasPrime = true;
        }
    }

    return hasPrime = false && sum == 0;
}

void sortRowByAbs(int row[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (abs(row[j]) > abs(row[j + 1]))
            {
                std::swap(row[j], row[j + 1]);
            }
        }
    }
}

void processMatrix(int matrix[N_Max][N_Max], int n)
{
    bool columnFound = false;

    for (int j = 0; j < n; j++)
    {
        if (checkColumn(matrix, n, j))
        {
            columnFound = true;
            break;
        }
    }

    if (columnFound)
    {
        for (int i = 0; i < n; i++)
        {
            sortRowByAbs(matrix[i], n);
        }
    }
    else
    {
        std::cout << "column not found" << std::endl;
    }
}

void writeMatrix(int matrix[N_Max][N_Max], int n)
{
    std::cout << "matrix after proccessing:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
