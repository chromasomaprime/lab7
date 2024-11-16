#include <iostream>
#include "func.hpp"

void Read(int mas[N_Max][M_Max], int& n, int& m)
 {
    std::cout << "enter n ";
    std::cin >> n;
    std::cout << "enter m ";
    std::cin >> m;
    std::cout << "enter matrix values:" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> mas[i][j];
        }
    }
}

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i=2; i*i<=num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool checkColumn(int mas[N_Max][M_Max], int n, int m)
{
    int sum = 0;
    bool hasPrime = false;

    for (int row = 0; row < n; ++row)
    {
        int value = mas[row][m];
        sum += value;
        if (isPrime(value))
        {
            hasPrime = true;
        }
    }

    return hasPrime = false && sum == 0;
}

void sortRow(int row[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (abs(row[j]) > abs(row[j + 1]))
            {
                std::swap(row[j], row[j + 1]);
            }
        }
    }
}

void swapRows(int a[], int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        int tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}

int rowProduct(int row[], int m)
{
    int product = 1;
    for(int i=0; i<m; i++)
    {
        product *= row[i];
    }
    return product;
}

void proccess(int mas[N_Max][M_Max], int n, int m)
{
    bool columnFound = false;

    for (int j = 0; j < n; ++j)
    {
        if (checkColumn(mas, n, j))
        {
            columnFound = true;
            break;
        }
    }

    if (columnFound)
    {
        for (int i = 0; i < n; ++i)
        {
            rowProduct(mas[i], n);
        }
    }
    else
    {
        std::cout << "not found" << std::endl;
    }
}

void Write(int mas[N_Max][M_Max], int n, int m)
{
    std::cout << "Output:" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << mas[i][j] << " ";
        }
        std::cout << std::endl;
    }
}